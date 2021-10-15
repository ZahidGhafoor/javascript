# =============================Loops============================================

# For Loop

#  "For Loop" depends on the elements it has to iterate in the list or dictionery.


friends = ["zahid ", "tayyab" , "tata" , "janta" , "jin"]

list2 = ["zahid ", "tayyab" , "TATA" , "janta" , "JIN"]

list3 = ["zahid ", "tayyab" , "TATA" , "janta" , "JIN" , 1 ,2 ,3, 4 ,5, 6,7]

# print(friends[1])

# This will print only the 2nd index of list but if we have thousands of index in list its difficult for us to print each value 


# so we use loops to print thousands of values in single peace of code

# for item in friends :
#     print(item)


# for loop with if else condition


for item in list3:
    if str(item).isnumeric() and item > 5:
        print(item)



for item in list2:
    if item.isupper() :
        print(item)


# ========================================While Loop=========================================       

#  while loop which depends on condition true or false. 

# i = 0
# while(i<45):
#     i = i+1
#     print(i)



# ==================================== Break & Continue Statement ===============================

# Create a programm that take input from user and if the value is less then 100 it will print try again and if number is greater than 100 print congratulation


while(True):
    zahid = int(input("Entre your number"))

    if zahid>100:
        print("Congrats")
        break
    else:
        print("try again")

        


        



