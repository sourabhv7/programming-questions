/*
    Code by : Rohit Patil

    Question : Print the followingpattern

    4
    6 8
    9 10 12
    14 15 16 18
    20 21 22 24 25

*/

#include<iostream>
using namespace std;

bool isprime(int n)
{
    int i=2,j=2;
    while (j<=(n/2))
    {
        if(n%j==0)
        {
            return false;
        }
        j++;
    }
    return true;
}

int main()
{
    int n=4,i,j,row=5;
    cout << "\nPattern of Prime Numbers : \n\n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<=i; j++)
        {
            if(isprime(n))
            {
                n++;
            }
            if(!isprime(n))
            {
                cout << n << " ";
                n++;
            }
        }
        cout << endl;
    }
        cout << endl;

    return 0;
}