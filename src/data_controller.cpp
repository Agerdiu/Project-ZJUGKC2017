#include "data_controller.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonValue>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>

Data_Controller::Data_Controller(QObject *parent) : QObject(parent)
{
    league_index="XiJia";
    team_name="球队0";
    Lock=false;
}
void Data_Controller::setLeagueData(QString leaguename)
{
    league_index=leaguename;
    qDebug("LeagueName has been changed");
    qDebug(leaguename.toUtf8().data());
    emit leagueDataChanged(league_index);
    getTeamList(leaguename);
}
void Data_Controller::setTeamData(QString teamname)
{
    team_name=teamname;
    getTeamInfo(teamname);
    getTeamMemList(teamname);
    qDebug("TeamData has been changed");
    qDebug(teamname.toUtf8().data());
    emit teamDataChanged(team_name);
}
QString Data_Controller::getLeague()const
{
    return league_index;
}
QString Data_Controller::getTeamName()const
{
    return team_name;
}
QList<QObject*>Data_Controller::getTeamList(QString league_name)
{
    //QList<QObject*> TeamList;
    teamlist.clear();
    QList<TeamData*>TeamList2;
    QFile file;
    qWarning("The League Name is %s\n",league_name.toUtf8().data());
    file.setFileName("data/"+league_name+".txt");
    /*
    if(league_name=="XiJia")
        file.setFileName("data/XiJia.txt");
    else if(league_name=="DeJia")
        file.setFileName("DeJia.txt");
    else if(league_name=="YinChao")
        file.setFileName("YinChao.txt");
    else if(league_name=="YiJia")
        file.setFileName("YiJia.txt");
    else  file.setFileName("XiJia.txt");*/
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString val = file.readAll();
    //qWarning(val.toUtf8().data());
    file.close();
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject rootObject = d.object();
    QJsonValue TeamsJsonValue = rootObject.value(QString("Teams"));
    QJsonObject TeamsObject = TeamsJsonValue.toObject();
    //qWarning()<<TeamsObject;
    for(auto beginItr = TeamsObject.begin(); beginItr != TeamsObject.end(); ++beginItr)
    {
        QJsonValue eachTeamsJsonValue = *beginItr;
        QJsonObject eachTeamsJsonObject = eachTeamsJsonValue.toObject();
        TeamData* tmpTeams=new TeamData(eachTeamsJsonObject["rank"].toString(),
                eachTeamsJsonObject["name"].toString(),eachTeamsJsonObject["wins"].toString(),
                eachTeamsJsonObject["draws"].toString(),
                eachTeamsJsonObject["loses"].toString(),
                eachTeamsJsonObject["point"].toString());
        TeamList2.append(tmpTeams);
    }
    qSort(TeamList2.begin(),TeamList2.end(),compareData);
    setTeamData(TeamList2[0]->getTeamListName());
    for(int i=0;i<TeamList2.length();i++)
        teamlist.append(TeamList2[i]);
    emit signalList(teamlist);
    //qWarning("The Teamlist Length is +%d",TeamList.length());
    return teamlist;
}
QObject* Data_Controller::getTeamInfo(QString team_name)
{
    QObject*info1=new Team_info("","","","","","","","");
    QFile file;
    //file.setFileName(team_name.append("/_info.txt"));
    file.setFileName("./data/teamlist/"+league_index+"_info.JSON");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString val = file.readAll();
    file.close();
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject rootObject = d.object();
    QJsonValue TeamsJsonValue = rootObject.value(QString("info_list"));
    if(TeamsJsonValue.isArray()){
        QJsonArray info_array = TeamsJsonValue.toArray();
        for(int i=0;i<info_array.size();i++){
           QJsonValue value = info_array.at(i);
           QJsonObject object=value.toObject();
           if(object["Team_name"].toString()==team_name){
               QObject* info=new Team_info(object["Goals per game"].toString(),
                       object["Tournament"].toString(),
                       object["Tackles per game"].toString(),
                       object["Avg. Possession"].toString(),
                       object["Season"].toString(),
                       object["Shots per game"].toString(),
                       object["Dribbles per game"].toString(),
                       object["Pass Accuracy"].toString());
               qWarning("Information has been Load\n");
               emit signalInfo(info);
               return info;
           }
        }
    }
    emit signalInfo(info1);
    return info1;
}
void Data_Controller::setLock(bool lock){
    Lock=lock;
    if(Lock==false){
        team_name_lock.clear();
        league_index_lock.clear();
    }
    qDebug()<<Lock;
    emit(teamLockChanged(team_name_lock));
    emit leagueLockChanged(league_index_lock);
    emit(lockChanged(lock));
}
bool Data_Controller::isLocked()const{
    return Lock;
}
QList<QObject*> Data_Controller::getTeamMemList(QString teamname)
{
    memlist.clear();
    QFile file;
    file.setFileName("./data/"+league_index+"Player/"+teamname+"_players.JSON");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString val = file.readAll();
    file.close();
    QJsonDocument d = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject rootObject = d.object();
    QJsonValue MemJsonValue = rootObject.value(QString("players"));
    if(MemJsonValue.isArray()){
        qWarning("The Players Document is Array\n");
        QJsonArray info_array = MemJsonValue.toArray();
        for(int i=0;i<info_array.size();i++){
            QJsonValue value = info_array.at(i);
            QJsonObject object=value.toObject();
           QObject* info=new mem_info(object["name"].toString(),
                        object["age"].toString(),
                        object["goals"].toString(),
                        object["assists"].toString(),
                        object["rating"].toString());
            memlist.append(info);
         }
     }
     emit signalMemList(memlist);
     return memlist;
}
//用于排序
bool compareData(const TeamData *Team1, const TeamData *Team2)
{
    if (Team1->getTeamListRank().toInt() > Team2->getTeamListRank().toInt())
    {
        return false;
    }
    return true;
}
QString Data_Controller::getTeamLock()const{
    return team_name_lock;
}
QString Data_Controller::getLeagueLock()const{
    return league_index_lock;
}
void Data_Controller::setTeamLock(QString team_name){
    if(Lock==true){
    team_name_lock=team_name;
    qDebug()<<"team_name_lock is"<<team_name_lock;
    }
    emit teamLockChanged(team_name_lock);
}
void Data_Controller::setLeagueLock(QString league_name){
    if(Lock==true){
    league_index_lock=league_name;
    qDebug()<<"league_index_lock is"<<league_index_lock;
    }
    emit leagueLockChanged(league_index_lock);
}
