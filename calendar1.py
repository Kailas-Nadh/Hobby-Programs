import calendar

print("\n")
year=int(input("Enter the year:"))
month_name=input("Enter the month:")
print("\n")

if(month_name == "January" or month_name == "january"):
	month=1
elif(month_name == "February" or month_name == "february"):
	month=2
elif(month_name == "March" or month_name == "march"):
	month=3
elif(month_name == "April" or month_name == "april"):
	month=4
elif(month_name == "May" or month_name == "may"):
	month=5
elif(month_name == "June" or month_name == "june"):
	month=6
elif(month_name == "July" or month_name == "july"):
	month=7
elif(month_name == "August" or month_name == "august"):
	month=8
elif(month_name == "September" or month_name == "september"):
	month=9
elif(month_name == "October" or month_name == "october"):
	month=10
elif(month_name == "November" or month_name == "november"):
	month=11
elif(month_name == "December" or month_name == "December"):
	month=12

	
x=calendar.month(year,month)
print(x)
