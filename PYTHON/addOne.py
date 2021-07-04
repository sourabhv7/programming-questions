'''
    Code By Sourabh Verma
    write a program where a function "addOne"  take vector and also return vector 
    like vector<int> addOne(vector<int> v){
        // code....
        return vector<int>
    } 

    your task is simply add 1 to vector and return the vector
    ex. vector  v = {1,2,3,4};
        output - {1,2,3,4}+1 = {1,2,3,5};

        explain 1,2,3,4 = 1234,
        after add one = 1234+1; 1235
        return {1,2,3,5};

        ex2. v={9,9,9};
        return 999+1 = {1,0,0,0};
'''

def addOne(arr,l):
    sum = 0
    i = 0
    while i<l:
        sum *= 10
        sum += arr[i]
        i += 1
    sum += 1
    rem = 1
    newarr =[]
    while sum > 0:
        rem = sum % 10
        sum = sum // 10
        newarr.insert(0,rem)
    return newarr

arr = [int(x) for x in input("Enter values: ").split()]
l = len(arr)
newArr = addOne(arr,l)
print(newArr)

