# =================================Enumerate Function=================================

# Enumerate() method adds a counter to an iterable and returns it in a form of enumerate object. This enumerate object can then be used directly in for loops or be converted into a list of tuples using list() method.



lis= ["Panadol" ,  "calpol" , "voveran" , "dicloran", "pulmonol"]

i=1 
for item in lis:
    if i%2 != 0:
        print(item)
    i += 1



# for index , item in enumerate(lis):
#     if index %2 == 0:
#         print(item)