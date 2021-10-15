star = int(input("Enter Number of Starts And ITS Rows :"))

s = int(input("Straight Row = 0 & reverse Row = 1 :"))

if (s == 0) :
    for i in range(0 , (star)) :
        print(star*"*")
        star = star-1
else :
    star = star + 1
    for i in range(0 , (star)) :
        print(i*"*")



