/*
该类记录球队名称、排名、胜负场次等，用于给积分榜提供数据
*/
#ifndef TEAMDATA_H
#define TEAMDATA_H

#include <QObject>
class TeamData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString TeamListRank READ getTeamListRank CONSTANT)
    Q_PROPERTY(QString TeamListName READ getTeamListName CONSTANT)
    Q_PROPERTY(QString TeamListWin READ getTeamListWin CONSTANT)
    Q_PROPERTY(QString TeamListDraw READ getTeamListDraw CONSTANT)
    Q_PROPERTY(QString TeamListLose READ getTeamListLose CONSTANT)
    Q_PROPERTY(QString TeamListScore READ getTeamListScore CONSTANT)
public:
    TeamData(QObject *parent = 0);
    TeamData(QString ranking="0",QString Team_name="",
             QString win_num="0",QString draw_num="0",
             QString loss_num="0", QString score_num="0",
             QObject *parent=0
             );
    QString getTeamListName()const;
    QString getTeamListRank()const;
    QString getTeamListWin()const;
    QString getTeamListDraw()const;
    QString getTeamListLose()const;
    QString getTeamListScore()const;
private:
    QString Ranking;
    QString Team_name;
    QString Win_num;
    QString Draw_num;
    QString Loss_num;
    QString Score_num;
signals:

public slots:
};
bool compareData(const TeamData *Team1, const TeamData *Team2);
#endif // TEAMDATA_H
