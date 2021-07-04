/*
    Code by : Rohit Patil
    Question : Right rotate circularly
*/

#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int n=5;
    cout << "Enter the size : "; cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i=0; i<n; i++) cin >> arr[i];

    reverse(arr,arr+n-1);
    reverse(arr,arr+n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}