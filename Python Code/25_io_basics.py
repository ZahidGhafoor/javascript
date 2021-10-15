# File io basics

"""
"r" - open file for reading
"w" - open file for writing
"x" - creates file if not exist
"a" - add more content to a file
"t" - text mode
"b" - binary mode
"+" - read and write
"""

# open file for write

f = open("zahid4.py" , "w")
f.write("hlo how are you")
print()
 
# append add more character

f = open("zahid4.py" , "a")
f.write("kaya hal ha")
print()

# handle Both  read and write

f = open("zahid4.txt" , "r+")
f.write("kaya hal ha")
print(f.read())
f.write("Thank yoyu \n")





