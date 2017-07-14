#include "team_info.h"

Team_info::Team_info(QString goals,QString tournament,
                     QString tackles,QString poss,
                     QString season, QString shots,
                     QString dribbles,QString passAccu,
                     QObject *parent):QObject(parent)
{
    Goal=goals;
    Tournament=tournament;
    Tackles=tackles;
    Poss=poss;
    Season=season;
    Shot=shots;
    Dribbles=dribbles;
    PassAccu=passAccu;
}
QString Team_info::getInfoGoal()const{
    return Goal;
}
QString Team_info::getInfoTourn()const{
    return Tournament;
}
QString Team_info::getInfoTackles()const{
    return Tackles;
}
QString Team_info::getInfoPoss()const{
    return Poss;
}
QString Team_info::getInfoSeason()const{
    return Season;
}
QString Team_info::getInfoShot()const{
    return Shot;
}
QString Team_info::getInfoDribbles()const{
    return Dribbles;
}
QString Team_info::getInfoPassAccu()const{
    return PassAccu;
}
Team_info::Team_info(const Team_info &team_info)
{
    Goal=team_info.Goal;
    Tournament=team_info.Tournament;
    Tackles=team_info.Tackles;
    PassAccu=team_info.PassAccu;
    Poss=team_info.Poss;
    Shot=team_info.Shot;
    Dribbles=team_info.Dribbles;
    Season=team_info.Season;
}
