from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.action_chains import ActionChains
from bs4 import BeautifulSoup
import bs4
import urllib
import json
import os 
import sys  
import time
import json
import lxml
reload(sys)  
sys.setdefaultencoding('utf8')   
info_Home = {}
info_Away = {}

url = 'https://www.whoscored.com/Regions/206/Tournaments/4/Spain-La-Liga'
index_driver = webdriver.Chrome()
index_driver.get(url)
head = 'https://www.whoscored.com'
index_data = BeautifulSoup(index_driver.page_source,"lxml")
table = index_data.find("tbody",attrs = {"class":"standings"})

path = "U:\Projects\PythonApplication9\PythonApplication9\Xijia\\"

def get_players(team):
    url = team.get('href')
    url = head + url
    if (os.path.exists(path+"player_record.json")==False):
        fo = open(path+"player_record.json", "w+")
        T={"list":[]}
        jstr = json.dumps(T)
        fo.write(jstr)
        fo.close()
    record = json.load(open(path+"player_record.json", 'r'))
    for game in record["list"]:
         if(url==game):
             return
    
    driver = webdriver.Chrome()
    driver.get(url)
    data = BeautifulSoup(driver.page_source,"lxml")
    chart = data.find("tbody",id="player-table-statistics-body")
    pdata = []
    for player in chart.findChildren("tr"):
        detail={}
        detail["name"] = player.find("a").string
        t=player.find_next("td",attrs={"class":"pn"})
        age = player.find_next("span",attrs={"class":"player-meta-data"})
        detail["age"] = age.string
        height = t.find_next("td")
        detail["height"] = height.string
        weight = height.find_next("td")
        detail["weight"] = weight.string
        apps = weight.find_next("td")
        detail["apps"] = apps.string
        goal = player.findChild("td",attrs={"class":"goal"}).string
        goal=goal.replace("\t","")
        detail["goals"] = goal
        assist = player.findChild("td",attrs={"class":"assistTotal"}).string
        assist = assist.replace("\t","")
        detail["assists"] = assist
        u=player.findChild("td",attrs={"class":"manOfTheMatch"})
        ratings=u.find_next("td")
        detail["rating"] =ratings.string
        pdata.append(detail)
    print 'get\n'
    r = json.load(open(path+team.string+"_players.json", 'r'))
    r["players"]=pdata
    json.dump(r, open(path+team.string+"_players.json", 'w'))
    record["list"].append(url)
    json.dump(record, open(path+"player_record.json", 'w'))
    driver.close()
for team in table.findChildren("a", class_ = "team-link"):
    print team.string
    if (os.path.exists(path+team.string+"_players.json")==False):
        fo = open(path+team.string+"_players.json", "w+")
        jstr = '{"players":[]}'
        fo.write(jstr)
        fo.close()
    get_players(team)
print "done"    
os.system("pause")
#driver.close()