# output the google search result of a search query given as a user input
#
# Author: Xinyu Wang
# Date: October 17, 2015

import requests, bs4, webbrowser

print('Googling...')
res = requests.get('http://google.com/search?q=' + ' '.join(input('Enter the search query: ').split()))
res.raise_for_status()

# Retrieve top search result links.
soup = bs4.BeautifulSoup(res.text)

# Open a browser tab for each result.
linkElems = soup.select('.r a')
numOpen = min(5, len(linkElems))
for i in range(numOpen):
    webbrowser.open('http://google.com' + linkElems[i].get('href'))