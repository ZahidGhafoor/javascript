# here we get our factorial buy Itrative method means we use loop

def factorial_itrative(p):
    fac = 1
    for i in range(p):
        fac = fac * (i+1)
    return fac

    # here we it as well with recursion method


def factorial_recursive(q):
    if q == 1:
        return 1
    else:
        return q*factorial_recursive(q-1)


number = int(input("Entre your number to get factorial: "))

print("Factorial Recursive", factorial_recursive(number))


# print with itration

print("Factorial Itrative", factorial_itrative(number))




# =================================== Fibonahi number===========================================



# def fibonachi(n):
#     if n==1:
#         return 0
#     elif n==2:
#         return 1
#     else:
#         return fibonachi(n-1)+ fibonachi(n-2)
# number = int(input("Entre your number to get factorial: "))
# print("Fibonachi number =", fibonachi(number))
