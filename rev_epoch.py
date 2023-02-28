#This program returns the exact date and time at UTC and IST (+05:30 UTC) for a given input
#The input should be the number of seconds past the Unix epoch
#Unix epoch began on 01 January 1970, 00:00 UTC

import time
import calendar

seconds = int(input("Enter the seconds: "))

print("\n\n******************UTC******************")
result = time.gmtime(seconds)
#print("result:", result)
month_name = calendar.month_name[result.tm_mon]
print(result.tm_year, month_name, result.tm_mday)
print(result.tm_hour,"hours,",result.tm_min,"minutes,",result.tm_sec,"seconds")

print("\n******************IST******************")
result = time.localtime(seconds)
#print("result:", result)
month_name = calendar.month_name[result.tm_mon]
print(result.tm_year, month_name, result.tm_mday)
print(result.tm_hour,"hours,",result.tm_min,"minutes,",result.tm_sec,"seconds")

