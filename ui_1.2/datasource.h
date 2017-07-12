#ifndef DATASOURCE_H
#define DATASOURCE_H

#include <QAbstractItemModel>
#include <QVector>
#include <QLineSeries>
#include <iostream>
#include <algorithm>
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <string>
#include <cassert>
#include <fstream>
#include "rapidjson/rapidjson.h"
#include "rapidjson/reader.h"
#include <cstdlib>
#include <vector>
#include <QDebug>
using namespace QtCharts;
using namespace std;
using namespace rapidjson;
class dated {
public:
    int date;
    double data;
    bool operator <(const dated dat2)
    {
        return date<dat2.date;
    }
};
class datasource : public QObject
{

    Q_OBJECT
public:
    Q_INVOKABLE void prepare(QLineSeries* series,QString league, QString team, QString attr);
private:
    enum months {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    void getdata(string league, string team, string attr);

    vector<dated> data;
    int datetoint (string date);
    bool cmp(dated &dat1,dated &dat2)
    {
        return dat1.date<dat2.date;
    }
    int max(int a, int b)
    {
        return a>b?a:b;
    }
};

#endif // DATASOURCE_H
