# ==================== *Args & **kwargs ==============================

# *args passes variable number of no-keyworded arguments list and on which operation of the list can be preferred

# **kwargs passes varialbe number of keyword arguments dictionery to fuction on which operation of a dictionary can be performed


# def func1(a,b,c,d):
#     print(a,b,c,d)

# func1("Zahid","tayyab","jin","tata", "Ashraf")


def func2(normal,*args, **kwargs):
    print(normal)


    for i in args:
        print(i)


    # print(args)

    for key , value  in kwargs.items():
        print(f"{key} father name is  {value}")



name=("Zahid","tayyab","jin","tata", "Ashraf") 

normal= "Hlo how are you my name is zahid"


fname={"Zahid": "Ghafoor","tayyab": "Ashraf" ,"jin": "rang", "tata":"saleem" }

func2(normal,*name, **fname)



