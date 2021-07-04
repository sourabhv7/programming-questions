/*
    Code by : Rohit Patil
    Question : Find the duplicate element form given array which contain the integers from 0 to size-1.

    Below solution takes O(n) time for complete execution with O(1) extra space.
    I used same array as a vertual kind of hash, by which i can get reapetion on divide and actual value on modulo operation
*/

#include<iostream>
using namespace std;

void duplicate(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        arr[arr[i]%size]+=size;
    }
    for(int i=0; i<size; i++)
    {
        if(arr[i]/size>1)
        {
            cout << i << "    ---->   " << arr[i]/size << endl;
        }
        arr[i]=arr[i]%size;
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "\nEnter array size : "; cin >> size;
    cout << "Enter elements in range of 0 to size-1 : ";
    int arr[size];

    for(int i=0; i<size; i++)  cin >> arr[i];
    cout << "\nValues   " << " Repeatations\n\n";
    duplicate(arr,size);

    return 0;
}