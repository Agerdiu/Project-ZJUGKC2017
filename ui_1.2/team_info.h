#ifndef TEAM_INFO_H
#define TEAM_INFO_H

#include <QObject>
class Team_info:public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString TeamInfoGoal READ getInfoGoal CONSTANT)
    Q_PROPERTY(QString TeamInfoTourn READ getInfoTourn CONSTANT)
    Q_PROPERTY(QString TeamInfoTackle READ getInfoTackles CONSTANT)
    Q_PROPERTY(QString TeamInfoPoss READ getInfoPoss CONSTANT)
    Q_PROPERTY(QString TeamInfoSeason READ getInfoSeason CONSTANT)
    Q_PROPERTY(QString TeamInfoShot READ getInfoShot CONSTANT)
    Q_PROPERTY(QString TeamInfoPass READ getInfoPassAccu CONSTANT)
    Q_PROPERTY(QString TeamInfoDribble READ getInfoDribbles CONSTANT)
public:
    friend class Data_Controller;
    Team_info(QString Goals="0",QString Tournament="",
              QString Tackles="0",QString Poss="0",
              QString Season="0", QString Shots="0",
              QString Dribbles="0",QString PassAccu="0",
              QObject *parent=0);
    Team_info(const Team_info& team_info);
    QString getInfoGoal()const;
    QString getInfoTourn()const;
    QString getInfoTackles()const;
    QString getInfoPoss()const;
    QString getInfoSeason()const;
    QString getInfoShot()const;
    QString getInfoDribbles()const;
    QString getInfoPassAccu()const;
private:
    QString Goal;
    QString Tournament;
    QString Tackles;
    QString Poss;
    QString Season;
    QString Shot;
    QString Dribbles;
    QString PassAccu;
};

#endif // TEAM_INFO_H
