from selenium import webdriver
from bs4 import BeautifulSoup
import bs4
import urllib
import json
import os 
import sys  
import json
reload(sys)  
sys.setdefaultencoding('utf8')   
info_Home = {}
info_Away = {}

url = 'https://www.whoscored.com/Matches/1090797/Live/Germany-Bundesliga-2016-2017-Borussia-Dortmund-Werder-Bremen'
driver = webdriver.Chrome()
driver.get(url)
data = BeautifulSoup(driver.page_source,"html.parser")

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

fo = open("output.txt", "w")
list = {}
data = {}
list["home"]=info_Home
list["away"]=info_Away
data["date"] = date
data["home"] = home_team
data["away"] = away_team
data["result"] = result
data["list"] = list
jsonStr = json.dumps(data)  
fo.write("jsonStr:")
fo.write(jsonStr)

#fo = open("output.txt", "w")
#fo.write(data.prettify())
#print data.encode("GBK", 'ignore')
print "done"    
os.system("pause")
#driver.close()