# ================================== Python decorator ====================================


# A decorator is a design pattern in Python that allows a user to add new functionality to an existing object without modifying its structure. Decorators are usually called before the definition of a function you want to decorate.




def dec1(func1):
    def exec():
        print("Executing now")
        func1()
        print("Executeddd")


    return(exec)

# def zahid():
#     print("Zahid is good boy")

# dec1(zahid)


def zahid():
    print("Zahid is good boy")

zahid = dec1(zahid)

zahid()
