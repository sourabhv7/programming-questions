''' 
    Code By Sourabh Verma
    WAP a program to left rotate the element of an array.
    Input:
    arr = [1,2,3,4,5]
    n = 3 //Here, n determine the number of times an array should be rotated 
    Output:
    [3,4,5,1,2]
'''
arr = [1,2,3,4,5]
n = 3
i = 0
l = len(arr)
print("Before --->",arr)
while i<n:
    arr.insert(0,arr[l-1])
    arr.pop()
    i+=1
print("After  --->",arr)
