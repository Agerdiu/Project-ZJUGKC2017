#ifndef DATA_CONTROLLER_H
#define DATA_CONTROLLER_H

#include <QObject>
#include "teamdata.h"
#include "team_info.h"
#include "mem_info.h"
class Data_Controller : public QObject
{
    Q_OBJECT
    /*Q_ENUMS(League)*/
    Q_PROPERTY(QString TeamName READ getTeamName WRITE setTeamData NOTIFY teamDataChanged)
    Q_PROPERTY(QString LeagueName READ getLeague WRITE setLeagueData NOTIFY leagueDataChanged)
public:
    explicit Data_Controller(QObject *parent = 0);
    /*enum League{
        XiJia,
        DeJia,
        YinChao,
        YiJia
    };*/
    //给积分榜提供球队成员名单
    Q_INVOKABLE QList<QObject*> getTeamList(QString league_index);
    Q_INVOKABLE QList<QObject*> getTeamMemList(QString team_name);
    Q_INVOKABLE QObject* getTeamInfo(QString team_name);
    QString getTeamName()const;
    QString getLeague()const;
signals:
    void teamDataChanged(const QString teamname);
    void leagueDataChanged(const QString leaguename);
    void signalList(QList<QObject*> data);
    void signalInfo(QObject* info_data);
    void signalMemList(QList<QObject*>mem_data);
public slots:
    void setTeamData(QString teamname);
    void setLeagueData(QString leaguename);
private:
     //记录当前点击联赛名称
     QString league_index;
     //记录当前所点球队名称
     QString team_name;
     Team_info team_info;
     QList<QObject*>memlist;
     QList<QObject*>teamlist;
};

#endif // DATA_CONTROLLER_HT
