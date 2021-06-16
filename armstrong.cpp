#include<iostream>
#include<math.h>
using namespace std;

int count(int num)
{
    int count=0;
    while (num>0)
    {
        num/=10;
        count++;
    }
    return count;
}
bool Armstrong_no(int num,int count)
{
    int temp,sum=0,n=num;
    while (n>0)
    {
        temp=n%10;
        sum+=pow(temp,count);
        n=n/10;
    }
    if(sum==num) return true;
    else return false;
}

int main()
{
    int start,end;
    cout << "Enter the start and end point seperated by space : ";
    cin >> start >> end;

    while (start<=end)
    {
        if(Armstrong_no(start,count(start)))
        {
            cout << start << " ";
        }
        start++;
    }

    cout << endl;
    return 0;
}