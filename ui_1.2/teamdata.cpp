#include "teamdata.h"
TeamData::TeamData(QObject *parent): QObject(parent)
{

}
TeamData::TeamData(QString ranking,
                   QString team_name,
                   QString win_num,QString draw_num,
                   QString loss_num, QString score_num,QObject *parent):QObject(parent)
{
     Ranking=ranking;
     Team_name=team_name;
     Win_num=win_num;
     Draw_num=draw_num;
     Loss_num=loss_num;
     Score_num=score_num;

}
QString TeamData::getTeamListName()const
{
    return Team_name;
}
QString TeamData::getTeamListScore()const
{
    return Score_num;
}
QString TeamData::getTeamListRank()const
{
    return Ranking;
}
QString TeamData::getTeamListWin()const
{
    return Win_num;
}
QString TeamData::getTeamListDraw()const
{
    return Draw_num;
}
QString TeamData::getTeamListLose()const
{
    return Loss_num;
}
