/*
    Code by : Rohit Patil   
    Question : Rotate array by kth position;

*/
#include<iostream>
using namespace std;

void reverse(int arr[],int low,int high)
{
    int temp;
    while(low<high)
    {
        temp=arr[high];
        arr[high]=arr[low];
        arr[low]=temp;
        low++; high--;
    }
}
void Rotatearr(int arr[],int n,int k)
{
    reverse(arr,0,n-1-k);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int t;
    cout << "Enter number of test cases : ";
    cin >> t;

    while(t--)
    {
        cout << "\nEnter the size of array : ";
        int size,k;  
        cin >> size;
        int arr[size];
        cout << "Enter all elements : ";
        for(int i=0; i<size; i++) cin >> arr[i];
        cout << "Enter number of rotations you want : ";
        cin >> k; 
        k%=size; // this is because if we want to rotater any array more then its size then it must have to complete once cycle
        Rotatearr(arr,size,k);
    }

    return 0;
}