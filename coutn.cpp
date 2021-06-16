#include<iostream>
using namespace std;

int count(long long int n)
{
    if(n==0)
        return 1;
    if(n<0)
    {
        n=n*-1;
    }
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    long long int num=-123456789123;
    cout << count(num);

    return 0;
}