''' Code By Sourabh Verma
    WAP program to remove alphabets from a string.
    Input - daily buggers 123
    Output- 123
'''
mystr = 'Sourabh Verma 777'
print(mystr)
newstr = ''
for item in range(0,len(mystr)):
    if mystr[item] !=' ' and (mystr[item] < 'a' or mystr[item] >'z') and (mystr[item] < 'A' or mystr[item] >'Z'):
        newstr += mystr[item]
print(newstr)
