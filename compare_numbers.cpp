#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int n,len=3,i;
    int arr[len];

    cout << "Enter any three numbers : ";
    for(i=0; i<len; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+3);

    cout << "Assending order is : ";
    for(i=0; i<len; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << "\nDessending order is : ";
    for(i=len-1; i>=0; i--)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}