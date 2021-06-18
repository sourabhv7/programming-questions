/* Code By Sourabh Verma */
/*Write a program to print the below pattern
4
6 8
9 10 12
14 15 16 18
20 21 22 24 25
*/
#include<iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;  
        }    
    }    
    return true;
}
int main()
{
    int i, j ,num=4;
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <= i; j++)
        {   
            if(isPrime(num)) num++;
            if(!isPrime(num)){
                cout<<num<<" ";
                num++;
            }
        }
        cout<<endl;
    }
    return 0;
}