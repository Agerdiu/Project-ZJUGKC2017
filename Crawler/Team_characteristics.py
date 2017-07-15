from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.chrome.options import Options
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

url = 'https://www.whoscored.com/Regions/108/Tournaments/5/Italy-Serie-A'
chop = webdriver.ChromeOptions()
chop.add_extension('Adblock-Plus_v1.8.12.crx')
index_driver = webdriver.Chrome()
index_driver.get(url)
head = 'https://www.whoscored.com'
index_data = BeautifulSoup(index_driver.page_source,"lxml")
table = index_data.find("tbody", attrs = {"class": "standings"})
def get_match_info(match):
    url = match.get('href')
    url = head + url
    driver = webdriver.Chrome()
    driver.get(url)
    data = BeautifulSoup(driver.page_source,"lxml")
    name = data.find("span",attrs = {"class":"team-header-name"}).string
    print name
    Team_stat = data.find("dl",attrs = {"class":"stats"})
    data.find_next()
    Team_stat_details = Team_stat.findChildren("dt")
    t={}
    t["Team_name"]=name
    for stats in Team_stat_details:
        print stats.string
        print stats.find_next("dd").string
        if(stats.string=="Discipline"):
            Discipline ={}
            Discipline["yellow-card"] = (data.find("span",attrs = {"class":"yellow-card-box"}).string)
            Discipline["red-card"] = (data.find("span",attrs = {"class":"red-card-box"}).string)
            t[stats.string] = Discipline
        else:
            t[stats.string] = (stats.find_next("dd").string)
    record = json.load(open("U:\Projects\PythonApplication7\PythonApplication7\\infos.json", 'r'))
    record["info_list"].append(t)
    json.dump(record, open("U:\Projects\PythonApplication7\PythonApplication7\\infos.json", 'w'))
    driver.close()
    print 'get\n'

for match in table.findChildren("a", attrs = {"class": "team-link"}):
    print match.get("href")
    get_match_info(match)
#fo = open("output.txt", "w")
#fo.write(data.prettify())
#print data.encode("GBK", 'ignore')
print "done"    
os.system("pause")
#driver.close()