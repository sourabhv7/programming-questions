'''
    Code By Sourabh Verma
    WAP For a given input string(str), find and return the total number of words present in it.

    Input 
    this is a sample string
    Output 
    5
'''
string = str(input("Enter your string: "))
list = [string]
list = (list[0].split())
count = 0
for item in list:
    count += 1
print('Words in given string : ',count)