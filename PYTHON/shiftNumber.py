'''
    Code By Sourabh Verma
    Write a program to shift every element of an array to circularly right.
    E.g.-
    INPUT : 1 2 3 4 5
    OUTPUT : 5 1 2 3 4
'''
arr = [1,2,3,4,5]
print(arr)
l = len(arr)
arr.insert(0,arr[l-1])
arr.pop()
print(arr)