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
    Q_PROPERTY(bool lock READ isLocked WRITE setLock NOTIFY lockChanged)
    Q_PROPERTY(QString TeamLock READ getTeamLock WRITE setTeamLock NOTIFY teamLockChanged)
    Q_PROPERTY(QString LeagueLock READ getLeagueLock WRITE setLeagueLock NOTIFY leagueLockChanged)
public:
    explicit Data_Controller(QObject *parent = 0);
    //给积分榜提供球队成员名单
    Q_INVOKABLE QList<QObject*> getTeamList(QString league_index);
    Q_INVOKABLE QList<QObject*> getTeamMemList(QString team_name);
    Q_INVOKABLE QObject* getTeamInfo(QString team_name);
    QString getTeamName()const;
    QString getLeague()const;
    QString getTeamLock()const;
    QString getLeagueLock()const;
    bool isLocked()const;
signals:
    void teamDataChanged(const QString teamname);
    void leagueDataChanged(const QString leaguename);
    void signalList(QList<QObject*> data);
    void signalInfo(QObject* info_data);
    void signalMemList(QList<QObject*>mem_data);
    void lockChanged(bool lock);
    void teamLockChanged(QString team_lock);
    void leagueLockChanged(QString league_lock);
public slots:
    void setTeamData(QString teamname);
    void setLeagueData(QString leaguename);
    void setLock(bool lock);
    void setTeamLock(QString team_name_lock);
    void setLeagueLock(QString league_index_lock);
private:
     QString league_index;
     QString team_name;
     Team_info team_info;
     QString team_name_lock;
     QString league_index_lock;
     QList<QObject*>memlist;
     QList<QObject*>teamlist;
     bool Lock;
};

#endif // DATA_CONTROLLER_HT
