# ================== Lanmda or anonomys fucntion ==============================

# lamba function is one liner function and here we don't need to write def on start of function and no need to return the value it automatically return the value


def add(a,b):
    return a+b

def minus(a,b):
    return a-b

multiply = lambda a, b: a*b

# a =  minus(10,5)
# print(a)

print("addition is", (add(10,5)))
print("subtraction is", (minus(10,5)))
print("Multiplication is", (multiply(10,5)))