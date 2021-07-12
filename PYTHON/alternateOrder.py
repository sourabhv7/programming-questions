''' Code By Sourabh Verma
    WAP which arrange the element in alternative position
    like array arr[] = {5,-1,3,-5,2,-10};
    output = -1 5,-5,3,-10,2
    example 2 arr[] = {5,-1,3,-5,2,-10,19,11,18,20,30};
    output = -1 5,-5,3,-10,2,19,11,18,20,30
'''
def rearrange(myarr):
    l = len(myarr)
    pos , neg = [],[]
    for i in range(0,l):
        if myarr[i] >= 0:
            pos.append(myarr[i])
        else:
            neg.append(myarr[i])
    lOfpos = len(pos)
    lOfneg = len(neg)
    combinearr = []
    for j in range(0, l):
        if j < lOfneg:
            combinearr.append(neg[j])
        if j < lOfpos:
            combinearr.append(pos[j])

    return combinearr

def main():
    myarr = [5,-1,3,-5,2,-10,19,11,18,20,30]
    newarr = rearrange(myarr)
    print(myarr)
    print(newarr)

if __name__ == '__main__':
    main()

