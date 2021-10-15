# 38 =========================Modules in Python==================================

# A module is consisting of python code. A module can define fucntion, classes and variables.

import random
import time


# =================================== Ex 1 ====================================

number = random.randint(0,7)

print(number)

# =================================== Ex 2 ====================================


number2 = random.random()*5

print(number2)

# =================================== Ex 3 ====================================

lst = ["tayyab" , "tata" , "junaid" , "jin" , "zahid"]

choice = random.choice(lst)

print(choice)

# =================================== Ex 4 ====================================

localtime= time.asctime(time.localtime(time.time()))

print("now the current time is " , localtime)



# ============================39 F-strings ==================================

# this is simple method to add varialbe or concatination in strings


a = "zahid"
b = "tayyab"

print("This is our new varialbles " + a +b)

# but it is not useful and if we many varialbes it will create difficulty 
# and also we can use function in strings
# so we use F-strings

c= f"now varialbes print with F-string {a} {b} {random.randint(0,4)} "

print(c)

for i in range(10):
    print("He is a good boy")
    time.sleep(2)