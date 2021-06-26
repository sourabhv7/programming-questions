# Code By Sourabh Verma
# Q.Find the Missing Number.
# Example  arr[] = {1, 2, 4, 6, 3, 7, 8}  missing no is = 5

arr = [3,9,2,4,7,1,6,8,15,23,20]
size = len(arr)
arr.sort()
start = arr[0]
end = arr[size-1]
for i in range(start, end):
    if i not in arr:
        print(i,end = " ")