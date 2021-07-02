'''
Code By Sourabh Verma
    Given an array a[] of size N which contains elements from 0 to N-1,
    you need to find all the elements occurring more than once in the given array.

    Input:
    a[] = {2,3,1,2,3}
    Output: 2 3 
    Explanation: 2 and 3 occur more than once
    in the given array.
'''

def findDuplicate(arr,l):
    arr2 = []
    for i in range(0,l-1):
        if i == 0:
            if arr[i] == arr[i+1] :
                arr2.append(arr[i])
        else:
            if arr[i] == arr[i-1]:
                pass
            elif arr[i] == arr[i+1] :
                arr2.append(arr[i])
    return arr2

length = int(input("Enter length :"))
array= [int(x) for x in input("Enter values: ").split()]
for item in array:
    if item >= length:
        print("Limit exceeded")
        exit()
array = sorted(array)
finalArray = findDuplicate(array,length)
for item in finalArray:
    print(item,end='')
    print(' ',end='')
    