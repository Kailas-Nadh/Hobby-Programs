from datetime import *
import time

names=[]
dob=[]

def input_Name():

    with open("log.txt","a") as file1, open("date.txt","a") as file2:
        inp_name=input("Enter name:")
        names.append(inp_name)
        file1.write("\n")
        file1.write(inp_name)

        d1, m1, y1 = [int(x) for x in input("Enter first person's date(DD/MM/YYYY) : ").split('/')]
        inp_date = date(y1,m1,d1)
        dob.append(inp_date)
        file2.write("\n")
        file2.write(str(inp_date))
        
def input_DOB():

    print("\n\nList:")
    with open("log.txt","r") as file3, open("date.txt","r") as file4:
        names=file3.read().split("\n")
        dob=file4.read().split("\n")
        for i in range(len(names)):
            print(names[i],":",dob[i])
        

def find_Bday():
	day=str(date.today())
	todayList=day.split("-")
	with open("log.txt","r") as file3, open("date.txt","r") as file4:
		names=file3.read().split("\n")
		dob=file4.read().split("\n")
		for i in range(len(names)):
			dateList=dob[i].split("-")
			if todayList[1]==dateList[1] and todayList[2]==dateList[2]:
				print("It is " + names[i] + "'s birthday today")
			#else:
				#print("No bdays today")

    
print("\n\n********************BIRTHDAY BOT********************")
print("Created by: Anonymous\nCreated on: 28 June 2023\n\n")
time.sleep(1)
find_Bday()
keyPress=input("\nEnter y if you want to see the options...\n\t>> ")
if keyPress=="y":
	while True:
    		choice=input("\n1.Enter a birthday.\n2.List birthdays.\n3.Exit\n\nEnter your choice:\n\t>> ")

    		if choice=="1":
        		input_Name()
    
    		elif choice=="2":
        		input_DOB()

    		elif choice=="3":
        		print("\nQuitting",end="",flush=True)
        		for i in range (0,3):
        			print(".",end="",flush=True)
        			time.sleep(1)
        		print("\n\n")
        		exit()
    		else:
        		print("Enter VALID choice...!!!")
    


