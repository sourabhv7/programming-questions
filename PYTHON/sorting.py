'''Code By Sourabh Verma
W A P to accept three numbers from user and print them in ascending and decending order?'''

arr = list(map(int, input().split()))
ace = sorted(arr)
dec = sorted(arr, reverse=True)
print("Numbers in ascending order :",end="")
for item in ace:
    print(item,end='')
    print(' ',end = '')
print()
print("Numbers in descending order :",end="")
for item in dec:
    print(item,end='')
    print(' ',end = '')

