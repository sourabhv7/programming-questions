def reverse(num):
    rev = 0
    while num >0:
        rem = num % 10
        num //= 10
        rev = (rev*10)+rem   
    return rev

num = int(input("Enter any number :"))
print(reverse(num))