============================================
cat primer1.py
============================================
months = ["January","February","March","April","May","June","July","August","September","October","November","December"]
print(months[0])
print(months[1])

============================================                                                                                                                
vi primer1.py
============================================                                                                                                                
python primer1.py
============================================
January
February
March
April

============================================                                                                                                                                                            
cat primer1.py   
============================================

months = ["January","February","March","April","May","June","July","August","September","October","November","December"]
print(months[0])
print(months[1])
print(months[2])
print(months[3])
                                                                                                                                                            
============================================
cat primer2.py
============================================
months = ["January","February","March","April","May","June","July","August","September","October","November","December"]

for month in months:
    print(month)
                                                                                                                                                            
============================================
cat primer2.py
============================================

months = ["January","February","March","April","May","June","July","August","September","October","November","December"]
for month in months:
    print(month)

============================================
python primer2.py
============================================
January
February
March
April
May
June
July
August
September
October
November
December

============================================
cat primer3.py 
============================================

months = ["January","February","March","April","May","June","July","August","September","October","November","December"]

def ShowMonthsOfTheYear(year):
    for month in months:
        print(month+" "+year)

print("2022:")
ShowMonthsOfTheYear("2022")
print("2023:")
ShowMonthsOfTheYear("2023")

============================================
python primer3.py
============================================
2022:
January 2022
February 2022
March 2022
April 2022
May 2022
June 2022
July 2022
August 2022
September 2022
October 2022
November 2022
December 2022
2023:
January 2023
February 2023
March 2023
April 2023
May 2023
June 2023
July 2023
August 2023
September 2023
October 2023
November 2023
December 2023

============================================
cat primer4.py   
============================================

months = ["January","February","March","April","May","June","July","August","September","October","November","December"]

def ShowMonthsOfTheYear(year):
    for month in months:
        print("\t"+month+" "+year)

print("2022:")
ShowMonthsOfTheYear("2022")
print("2023:")
ShowMonthsOfTheYear("2023")

============================================
vi primer4.py
============================================                                                                                                                
python primer4.py
============================================
2022:
        January 2022
        February 2022
        March 2022
        April 2022
        May 2022
        June 2022
        July 2022
        August 2022
        September 2022
        October 2022
        November 2022
        December 2022

2023:
        January 2023
        February 2023
        March 2023
        April 2023
        May 2023
        June 2023
        July 2023
        August 2023
        September 2023
        October 2023
        November 2023
        December 2023

============================================
cat primer4.py   
============================================

months = ["January","February","March","April","May","June","July","August","September","October","November","December"]
def ShowMonthsOfTheYear(year):
    for month in months:
        print("\t"+month+" "+year)
print("\n2022:")
ShowMonthsOfTheYear("2022")
print("\n2023:")
ShowMonthsOfTheYear("2023")
                                  
============================================
cat primer5.py
============================================
months = ["January","February","March","April","May","June","July","August","September","October","November","December"]
def ShowMonthsOfTheYear(year):
    for num in range(0,11):
        print("\t"+months[num]+" "+year)
print("2022:")
ShowMonthsOfTheYear("2022")
print("2023:")
ShowMonthsOfTheYear("2023")

============================================
python primer5.py
============================================
2022:
        January 2022
        February 2022
        March 2022
        April 2022
        May 2022
        June 2022
        July 2022
        August 2022
        September 2022
        October 2022
        November 2022
2023:
        January 2023
        February 2023
        March 2023
        April 2023
        May 2023
        June 2023
        July 2023
        August 2023
        September 2023
        October 2023
        November 2023

============================================
cat primer5.py
============================================

months = ["January","February","March","April","May","June","July","August","September","October","November","December"]

def ShowMonthsOfTheYear(year):
    for num in range(0,11):
        print("\t"+months[num]+" "+year)
print("2022:")
ShowMonthsOfTheYear("2022")
print("2023:")
ShowMonthsOfTheYear("2023")

============================================
cat primer6.py
============================================
months = ["January","February","March","April","May","June","July","August","September","October","November","December"]
def ShowSummerMonthsOfTheYear(year):
    for num in range(5,8):
        print("\t"+months[num]+" "+year)
print("2022:")
ShowSummerMonthsOfTheYear("2022")
print("2023:")
ShowSummerMonthsOfTheYear("2023")
============================================
python primer6.py
============================================
2022:
        June 2022
        July 2022
        August 2022
2023:
        June 2023
        July 2023
        August 2023
============================================
