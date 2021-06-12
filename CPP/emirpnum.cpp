#include <bits/stdc++.h>
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

bool isEmirp(int a){
    if(isPrime(a)){
        int rem , reverse = 0,aa = a;
        while(a!=0)    
        {    
            rem=a%10;      
            reverse=reverse*10+rem;    
            a/=10;    
        }
        int r = reverse;
        for (int j = 2; j < r; j++){
            if (r % j == 0){
                
                return false;  
            }    
        }    
        return true;           
    }
    return false;
}

int main()
{
    int a = 2, b = 150, k;
    short count = 1;
    for ( k = a; k <= b; k++)
    {   
        isEmirp(k) ? cout <<count++ <<". "<<k<< " is an emirp number\n" : cout<<"";   
    }
    return 0;
}
