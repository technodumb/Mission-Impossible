
from datetime import date, timedelta

day, month, year = list(map(int,input().split()))


date1 = date(year, month, day)
date2 = date1 + timedelta(101)
print(str(date2.day) + ' ' + str(date2.month) + ' ' + str(date2.year))