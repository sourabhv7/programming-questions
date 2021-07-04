/*
    Code by : Rohit Patil

    Question : Find all the multiples of given number
*/

#include<iostream>
using namespace std;
#include<algorithm>
void multiples(int a[],int size,int n)
{
    sort(a,a+size);
    int flag=1;
    for(int i=0; i<size; i++)
    {
        if(a[i]%n==0)
        {
            cout << a[i] << ' ';
            flag=0;
        }
    } 
    if(flag) 
        cout << "\nThere is no multiple of " << n << " are present";
}
int main()
{
    int n,size;
    cout << "\nEnter the size : ";
    cin >> size; 
    int a[size];
    cout << "\nEnter all elements : ";
    for(int i=0; i<size; i++) cin >> a[i];

    cout << "\nEnter number to print its multiple : ";
    cin >> n;

    multiples(a,size,n);
    

    return 0;
}