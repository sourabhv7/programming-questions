/*
    Code by : Rohit Patil
    Question : Rearrange the 0s 1s and 2s

    Approach : I used here Dutch National Flag algorithm

*/


#include<iostream>
using namespace std;

void rearrange(int a[],int size)
{
    int low,mid,high;
    low=mid=0; high=size-1;

    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[low]); low++; mid++;
        }
        else if(a[mid]==2)
        {
            swap(a[mid],a[high]); high--;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
    }
}
void printarr(int a[],int size)
{
    cout << "\nArranged Elements : [ ";
    for(int i=0; i<size; i++) 
        cout << a[i] << ' ';
    cout << "]\n\n";
}
int main()
{
    int t;
    cout << "\nEnter number of test cases : ";
    cin >> t;
    
    while(t--)
    {
        int size;
        cout << "\nEnter the size : "; 
        cin >> size;
        int a[size];
        cout << "Enter all elements : ";
        for(int i=0; i<size; i++) cin >> a[i];

        rearrange(a,size);
        printarr(a,size);
    }

    return 0;
}