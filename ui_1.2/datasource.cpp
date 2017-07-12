#include "datasource.h"

void datasource::prepare(QLineSeries* series, QString league, QString team, QString attr)
{
    series->clear();
    getdata(league.toStdString(), team.toStdString(),attr.toStdString());
    for(int i=max(0,data.size()-10);i<data.size();i++)
    {
        series->append(1+i,data[i].data);
        qDebug("%d %f",i,data[i].data);
    }
}

void datasource::getdata (string league, string team, string attr) {
    data.clear();
    string filename = ".\\data\\" + league+ "\\" + team + ".json";
    string json;
    ifstream fin(filename);
    qDebug("file prepared:%s\n",filename.c_str());
    if (!fin.is_open()) {
        qDebug("No such file.\n");
        return;
    }
    qDebug("file opened\n");
    string line;
    while (getline(fin, line)) {
        json.append(line + "\n");
    }
    fin.close();
    rapidjson::Document dom;
    dom.Parse(json.c_str());

    for (rapidjson::Value::ConstMemberIterator itr = dom.MemberBegin();
    itr != dom.MemberEnd(); ++itr) {
        dated datedtmp;
        //int dateint = datetoint(dom[itr->name.GetString()]["date"].GetString());
        datedtmp.date = datetoint(dom[itr->name.GetString()]["date"].GetString());
        if(!strcmp(dom[itr->name.GetString()]["home"].GetString(),team.c_str()))
            datedtmp.data = atof(dom[itr->name.GetString()]["list"]["home"][attr.c_str()].GetString());
        else
            datedtmp.data = atof(dom[itr->name.GetString()]["list"]["away"][attr.c_str()].GetString());
        //attr = new String(str.getBytes("gbk"),"uft-8");
        data.push_back(datedtmp);
    }
    sort(data.begin(),data.end());
}

int datasource::datetoint (string date) {
    int dateint = 0;
//    char day[3] = {date[0], date[1], date[2]};
    char date1[2] = {date[5], date[6]};
    char month[3] = {date[8], date[9]};
    char year[2] = {date[11], date[12]};
    int yr = atoi(year);
    dateint += (yr * 10000);
    int dt = atoi(date1);
    dateint += dt;
    int mth = atoi(month);
    dateint += (mth * 100);
    return dateint;
}
