def check_balanced(num):
    l = len(num)    
    LHS , RHS = 0 , 0
    if l % 2 == 0:
        return False
    else:
        mid = (l // 2)   
        for i in range(0,mid):
            LHS += int(num[i]) 

        for j in range(mid+1, l):
            RHS += int(num[j])
                
        if LHS == RHS:
            return True
        return False

num = str(input("Enter any number : "))
if check_balanced(num):
    print(num + " is a balanced number.")
else:
    print(num + " is a not balanced number.")
