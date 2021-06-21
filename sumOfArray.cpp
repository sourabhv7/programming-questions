#include<iostream>
using namespace std;
void inputArray(int arr[],int n){
    for(int i=0;i<n;i++)
        cin>>arr[i];
}
int arraySum(int arr[],int idx ,int len){
    return (idx==len) ? 0:arraySum(arr,idx+1,len)+arr[idx];
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    cout<<"Fill the array \n";
    int *arr =new int[n];
    inputArray(arr,n);
    cout<<"sum of the array is : "<<arraySum(arr,0,n); 
return 0;
}