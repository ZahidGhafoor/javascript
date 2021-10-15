
x = 50
def xahid():
    x = 20 
    def tayyab():
        global x 
        x = 80
        print("before calling tayyab" , x)
        
    tayyab()
    print("before calling tayyab" , x)

xahid()

print("now the value of x upadate because we update the value of x globaly")

print(x)