//Code By Sourabh Verma
/*
WAP to count number of pairs of given sum, where k represent sum of that pair.
Input : 1 2 3 4 5 6
K = 5
Output : 2
Explanation: There is only 2 pairs which gives exact 5 sum.
(1,4) and (2,3)
*/
#include<iostream>
using namespace std;

int main()
{
    short i,j,k,count=0,n,size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size] = {};
    cout<<"Enter "<<size<<" elements : ";
    for ( k = 0; k < size; k++) cin>>arr[k];

    cout<<"Enter the value of K : ";
    cin>>n;
    for(i = 0; i<size;i++){
        for(j = i; j< size ;j++)
            if(arr[i]+arr[j]==n) count++;        
    }
    cout<<"No. of pair is "<<count;
    return 0;
}