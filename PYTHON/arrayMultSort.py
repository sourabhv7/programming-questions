'''
Code By Sourabh Verma
WAP to take some numbers as input in an array and filter this in table of N and sort it (non repeatable ) also.
Ex. Input N = 2
array = {15, 16 , 4, 5, 2,8, 16, 6}
Output = { 2, 4, 6 , 8, 16 }
'''
def checkDuplicate(arr,n):
    arr2 = []
    for i in range(0,n-1):
        if arr[i] != arr[i+1]:
            arr2.append(arr[i])
    arr2.append(arr[n-1])
    return arr2
def multOfN(array,num):
    multArray = []
    length = len(array)
    newarray = checkDuplicate(array,length)
    for l in range(0,length-1):
        if newarray[l]%num == 0:
            multArray.append(newarray[l]) 
    return multArray


array = [int(x) for x in input("Enter values: ").split()]
num = int(input("Enter the value of N : "))
array = sorted(array)
finalArray = multOfN(array,num)
for item in finalArray:
    print(item,end='')
    print(' ',end='')