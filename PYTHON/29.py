##Hexadecimal to Decimal Number conversion
hex = input("Enter Hexadecimal number : ")
count = hex.count("",1 ,)
hex = hex.upper()
dec = 0
i = 1
for char in hex:
    if ord(char) in range(65,71):
        char = ord(char)-55
    dec = int(char)*16**(count-i) + dec
    i += 1
print(dec)