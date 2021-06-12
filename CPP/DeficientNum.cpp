//Code By Sourabh Verma
/*

Today's Quetion :- WAP to determine whether a given number is a Deficient number.
The deficient number can be defined as the number for which the sum of the proper divisors is lesser than the number itself.

For example, the number 21 with its proper divisors (1, 3 and 7) has sum (11) lesser than itself.
*/

#include<iostream>
using namespace std;

bool isDeficient(int a)
{
    int sum = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    if (sum<a)
        return true;

    return false;
       
}

int main()
{
    int num;
    cout<<"Enter any number to check : ";
    cin>>num;
    if (isDeficient(num)) cout<<num <<" is a Deficient Number.";
    
    else cout<<num << " is an Abundant Number.";
    
    return 0;
}