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

