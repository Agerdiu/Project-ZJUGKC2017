from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.chrome.options import Options
from bs4 import BeautifulSoup
import re
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
driver = webdriver.Chrome()
driver.get("http://kotologo.com/zh/page/italy")
content=driver.page_source
data = BeautifulSoup(content,"lxml")
tag=data.find("div",attrs={"id":"004_L1"})
list=tag.findChildren("li")
for team in list:
    name = team.find("div",attrs={"class":"zh_font"}).string
    url = team.find("img").get("src")
    print name
    print str(url)
    urllib.urlretrieve(str(url), "U://"+name+".jpg") 
print "done"    
os.system("pause")
#driver.close()