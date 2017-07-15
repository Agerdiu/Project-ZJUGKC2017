from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.action_chains import ActionChains
from bs4 import BeautifulSoup
from selenium.webdriver.chrome.options import Options
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
chop = webdriver.ChromeOptions()
chop.add_extension('Adblock-Plus_v1.8.12.crx')
url = 'https://www.whoscored.com/Regions/252/Tournaments/2/England-Premier-League'
index_driver = webdriver.Chrome()
index_driver.get(url)
head = 'https://www.whoscored.com'
index_data = BeautifulSoup(index_driver.page_source,"lxml")
table = index_data.find("table", id = "tournament-fixture")

def get_a_match(match):
    url = match.get('href')
    url = head + url
    record = json.load(open("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\games.json", 'r'))
    for game in record["game_id"]:
         if(url==game):
             return
    driver = webdriver.Chrome()
    driver.get(url)
    data = BeautifulSoup(driver.page_source,"lxml")
    team_data = data.find("ul", class_ = "match-centre-stats", attrs = {"data-mode": "team"})

    x = team_data.find_next("li", attrs = {"data-for": "ratings"})
    info_Home["ratings"] = ((x.find_next("span", attrs = {"data-field": "home"})).string)
    info_Away["ratings"] = ((x.find_next("span", attrs = {"data-field": "away"})).string)

    x = team_data.find_next("li", attrs = {"data-for": "shotsTotal"})
    info_Home["shots"] = ((x.find_next("span", attrs = {"data-field": "home"})).string)
    info_Away["shots"] = ((x.find_next("span", attrs = {"data-field": "away"})).string)

    x = team_data.find_next("li", attrs = {"data-for": "possession"})
    info_Home["possession"] = ((x.find_next("span", attrs = {"data-field": "home"})).string)
    info_Away["possession"] = ((x.find_next("span", attrs = {"data-field": "away"})).string)

    x = team_data.find_next("li", attrs = {"data-for": "passSuccess"})
    info_Home["pass_success"] = ((x.find_next("span", attrs = {"data-field": "home"})).string)
    info_Away["pass_success"] = ((x.find_next("span", attrs = {"data-field": "away"})).string)

    x = team_data.find_next("li", attrs = {"data-for": "dribblesWon"})
    info_Home["dribbles"] = ((x.find_next("span", attrs = {"data-field": "home"})).string)
    info_Away["dribbles"] = ((x.find_next("span", attrs = {"data-field": "away"})).string)

    x = team_data.find_next("li", attrs = {"data-for": "aerialsWon"})
    info_Home["aerials_won"] = ((x.find_next("span", attrs = {"data-field": "home"})).string)
    info_Away["aerials_won"] = ((x.find_next("span", attrs = {"data-field": "away"})).string)

    x = team_data.find_next("li", attrs = {"data-for": "tackleSuccessful"})
    info_Home["tackles"] = ((x.find_next("span", attrs = {"data-field": "home"})).string)
    info_Away["tackles"] = ((x.find_next("span", attrs = {"data-field": "away"})).string)

    x = team_data.find_next("li", attrs = {"data-for": "cornersTotal"})
    info_Home["corners"] = ((x.find_next("span", attrs = {"data-field": "home"})).string)
    info_Away["corners"] = ((x.find_next("span", attrs = {"data-field": "away"})).string)

    x = team_data.find_next("li", attrs = {"data-for": "dispossessed"})
    info_Home["dispossessed"] = ((x.find_next("span", attrs = {"data-field": "home"})).string)
    info_Away["dispossessed"] = ((x.find_next("span", attrs = {"data-field": "away"})).string)

    x = data.find("div", class_ = "match-header", id = "match-header")
    y = x.find_next("tr")
    home_team = ((y.find_next("a")).string)
    x = y.find_next("a")
    z = x.find_parent("td")
    x = z.find_next_sibling("td")
    result = x.string
    z = x.find_next("a")
    away_team = z.string
    x = y.find_next_sibling("tr")
    y = x.find_next("td")
    z = y.find_next_sibling("td")
    x = z.find_next("div")
    y = x.find_next_sibling("div")
    x = y.find_next_sibling("div")
    y = x.find_next("dd")
    x = y.find_next_sibling("dd")
    date = x.string
    date = date.replace("May","05")
    date = date.replace("Apr","04")
    date = date.replace("Mar","03")
    date = date.replace("Feb","02")
    date = date.replace("Jan","01")
    fo = open("output.dat", "a+")
    list = {}
    data = {}
    list["home"]=info_Home
    list["away"]=info_Away
    data["date"] = date
    data["home"] = home_team
    data["away"] = away_team
    data["result"] = result
    data["list"] = list
    if (os.path.exists("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\"+home_team+'.json')==False):
        fo = open("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\"+home_team+'.json', "w+")
        T={}
        jstr = json.dumps(T)
        fo.write(jstr)
        fo.close()
    readed = json.load(open("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\"+home_team+'.json', 'r'))
    readed[home_team+' : '+away_team]=data
    json.dump(readed, open("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\"+home_team+'.json', 'w'))
    if (os.path.exists("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\"+away_team+'.json')==False):
        fo = open("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\"+away_team+'.json', "w+")
        T={}
        jstr = json.dumps(T)
        fo.write(jstr)
        fo.close()
    readed = json.load(open("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\"+away_team+'.json', 'r'))
    readed[home_team+' : '+away_team]=data
    json.dump(readed, open("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\"+away_team+'.json', 'w'))
    driver.close()
    readed = json.load(open("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\games.json", 'r'))
    readed["game_id"].append(url)
    json.dump(readed, open("U:\Projects\PythonApplication6\PythonApplication6\Yingchao\\games.json", 'w'))
    readed[home_team+' : '+away_team]=data
    print 'get\n'

for match in table.find_all_next("a", class_ = "result-1 rc"):
    print match
    get_a_match(match)

for i in range(1, 12):
    actions = ActionChains(index_driver)
    element = index_driver.find_element_by_css_selector("a.previous.button.ui-state-default.rc-l.is-default")
    actions.move_to_element(element)
    actions.click().perform()
    index_data = BeautifulSoup(index_driver.page_source,"html.parser")
    table = index_data.find("table", id = "tournament-fixture")
    for match in table.find_all_next("a", class_ = "result-1 rc"):
        print match
        get_a_match(match)

#fo = open("output.txt", "w")
#fo.write(data.prettify())
#print data.encode("GBK", 'ignore')
print "done"    
os.system("pause")
#driver.close()