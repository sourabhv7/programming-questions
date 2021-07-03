/*  
    Find all pairs (sets) of prime numbers (p,q) such that p*q <= n, where n is given number.
    Example 1:

    Input: n = 4
    Output: 2 2
    Explanation: Pair (2, 2) which has both prime 
    numbers as well as satisfying the condition 
    2*2 <= 4.
    Example 2:

    Input: n = 8
    Output: 2 2 2 3 3 2
    Explanation: Pairs(2, 2), (2, 3) and (3, 2)
    which has both prime numbers and satisfying
    the given condition.
*/
#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;  
        }    
    }    
    return true;              
}
void primePair(int n){
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (isPrime(i) && isPrime(j) && i*j<=n)
            {
                cout<<'('<<i<<", "<<j<<')'<<" ";
            }   
        }   
    }
}
int main()
{
    int n;
    cin>>n;
    primePair(n);
    return 0;
}
