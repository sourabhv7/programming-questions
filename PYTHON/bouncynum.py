def check_bouncy(a,b,c,i):
    if (a>b and b<c) or (a<b and b>c):
        print(i)

for i in range(101,1000):
    i = str(i)
    a = i[0]
    b = i[1]
    c = i[2]
    check_bouncy(a,b,c,i)


    

    