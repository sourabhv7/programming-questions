#include<iostream>
using namespace std;
void printArray(int *arr,int n){ for(int i=0;i<5;i++) cout<<arr[i]<<" "; }
void fillArray(int *arr,int n){ for(int i=0;i<5;i++) cin>>arr[i]; }
void rotateArray(int *arr,int n,int count){
       if(count==0)return;
           int temp = arr[n-1],i=0;
       for(i=n-1;i>0;i--){
           arr[i] = arr[i-1];
       }arr[i] = temp;
       rotateArray(arr,n,count-1);
}
int main(){
    int n,pos;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the position for rotate : ";
    cin>>pos;
    int arr[n];
    cout<<"fill the array : ";
    fillArray(arr,n);
    rotateArray(arr,n,pos);
    printArray(arr,n);
return 0;
}