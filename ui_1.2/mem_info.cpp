#include "mem_info.h"

mem_info::mem_info(QObject *parent) : QObject(parent)
{

}
mem_info::mem_info(QString name,
                   QString age,
                   QString goal,QString assist,
                   QString score,QObject *parent):QObject(parent)
{
    mem_name=name;
    mem_age=age;
    mem_goal=goal;
    mem_assist=assist;
    mem_score=score;
}
QString mem_info::getMemName()const
{
    return mem_name;
}
QString mem_info::getMemAge()const
{
    return mem_age;
}
QString mem_info::getMemGoal()const
{
    return mem_goal;
}
QString mem_info::getMemAssit()const
{
    return mem_assist;
}
QString mem_info::getMemScore()const
{
    return mem_score;
}
