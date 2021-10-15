snum = 15
num_of_attempt = 0

while(num_of_attempt < 5):
    zahid = int(input("Entre your number  "))

    if zahid > snum:
        print("YOu enter larger number")
    elif zahid < snum:
        print("You enter leser numver")
    else:
        print("you won")
        break
    print("You have" , num_of_attempt - 5, "gueses left")
    num_of_attempt = num_of_attempt + 1

    if num_of_attempt >= 5:
        print("GAme over")
        break

