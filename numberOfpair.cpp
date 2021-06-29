// By Rajul THAKUR
//WAP to count number of pairs of given sum, where k represent sum of that pair.
#include<iostream>
#include<algorithm>
using namespace std;
void fillArray(int *arr,int n){
    cout<<"Fill array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
void numberOfPair(int *arr,int n,int k ){
    sort(arr,arr+n);
    int i=0,j=n-1,count=0;
    while(i<j){
        if(arr[i]+arr[j]==k){
            cout<<"("<<arr[i]<<","<<arr[j]<<") ,";
            count++;
            i++;j--;
        }
        else if(arr[i]+arr[j]>k)j--;
        else i++;
    }
    cout<<"number of pair are  : "<<count<<endl;
}
int main(){
    int n,k;
    cout<<"enter the size of the array  : ";
    cin>>n;
    int arr[n];
    fillArray(arr,n);
    cout<<"enter the value of k : ";
    cin>>k;
    numberOfPair(arr,n,k);
    return 0;
}