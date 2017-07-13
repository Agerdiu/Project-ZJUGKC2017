#ifndef MEM_INFO_H
#define MEM_INFO_H

#include <QObject>

class mem_info : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString MemName READ getMemName CONSTANT)
    Q_PROPERTY(QString MemAge READ getMemAge CONSTANT)
    Q_PROPERTY(QString MemGoal READ getMemGoal CONSTANT)
    Q_PROPERTY(QString MemAssist READ getMemAssit CONSTANT)
    Q_PROPERTY(QString MemScore READ getMemScore CONSTANT)
public:
    mem_info(QObject *parent = 0);
    mem_info(QString name="0",QString age="",
             QString goal="0",QString assist="0",
             QString score="0",QObject *parent=0);
    QString getMemName()const;
    QString getMemAge()const;
    QString getMemGoal()const;
    QString getMemAssit()const;
    QString getMemScore()const;
private:
    QString mem_name;
    QString mem_age;
    QString mem_goal;
    QString mem_assist;
    QString mem_score;
signals:

public slots:
};

#endif // MEM_INFO_H
