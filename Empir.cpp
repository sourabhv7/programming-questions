#include<iostream>
using namespace std;

bool isprime(int input)
{
    int i,half=input/2;
    for(i=2; i<=half; i++)
    {
        if(input%i==0)
            return false;
    }
    return true;
}

bool Emirp(int input)
{
    int rem,rev=0,num=input;
    while(num)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }

    if(isprime(input))
    {
        if(isprime(rev))
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int input=2,count=1;
    cout << "\n\nFollowing are the Emirp number from 1 to 150 : \n\n";
    for(input; input<=150; input++)
    {
        if(Emirp(input))
        {
            cout << count << ")  " << input << " - is a Emirp number" << endl;
            count++;
        }
    }

    return 0;
}