/*
    Code by : Rohit Patil
    Question: Print all the missing elements of array;
*/

#include<iostream>
#include<algorithm>
using namespace std;

bool issorted(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}
void print_Missing(int a[],int n)
{
    if(!issorted(a,n))
    {
        sort(a,a+n);
    }

    int low=a[0],diff=low-0;
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i]-i!=diff)
        {
            while(diff<a[i]-i)
            {
                cout << diff+i << " ";
                diff++;
            }
        }
    }
}
int main()
{
    int size;
    cout << "\nEnter the size of array : ";
    cin >> size;
    int arr[size];
    cout << "\nEnter the elements : ";
    for(int i=0; i<size; i++)
        cin >> arr[i];
    
    cout << "\nMissing elements in whole array are : ";
    print_Missing(arr,size);
    return 0;
}