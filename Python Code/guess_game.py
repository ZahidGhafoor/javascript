snum = 10 
NOG = 0

print("YOu have only five attempt to guess a number")

while(NOG<=5):
    Zahid = int(input("NOw entre your number: "))
    if Zahid>snum:
        print("YOu entre larger number")
    elif Zahid<snum:
        print("YOu Entre less number")
    else:
        print("YOu won")
        break
    print("YOu have" , 5 - NOG , "attempts left")
    NOG = NOG + 1

    if NOG >=5:
        print("Game over")
        break