numbers = ["3","83","377","36"]

# simple method to convert string into int with for loop

# for i in range(len(numbers)):
#     numbers[i] = int(numbers[i])




# map fuction takes two arguments, first argument is which fuction you want to apply and the second fucntion on which where you apply fucntion
print("now the number converted into int")

numbers = list(map(int, numbers))


numbers[3] = numbers[3]+3
print(numbers[3])


# example 2 with map function

def sq(a):
    return a*a

num = [2,3,4,6,7,8,9]

print("Here the whole list numbers convert into their sqaure")

sqaure= list(map(sq,num))
print(sqaure)


# ====================================== example 3 ======================================


def hel(x):
    return x(i)


def square(a):
    return a*a

def cube(a):
    return a*a*a

func = [square, cube]

for i in range(5):
    val = list(map(hel,func))
    print(val)

# ===================================== filer function ==================================

print("print the number greater than 5 with filter function")

num = [2,3,4,6,7,8,9]

def greater(num):

    return num>5

greater = list(filter(greater,numbers))

print(greater)

# ===================================== Reduce function ==================================
from functools import reduce
num2 = [2,3,4,6,7,8,9]

num = 0
for i in num2:
    num = num + i

# num7 = reduce(lambda x,y:x+y, num2)

print(num)




