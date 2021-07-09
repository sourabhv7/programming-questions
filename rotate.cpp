#include<iostream>
using namespace std;
void rotate(int *arr,int n,int idx){
        int temp=  arr[n-1],i=n-1;
    while(i>=idx){
         arr[i] = arr[i-1];
         i--;
    }arr[idx] = temp;
}
void arrange(int *arr,int n){
    int idx=0;
    while(idx<n){

    rotate(arr,n,idx);idx+=2;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6};
   arrange(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";   
    }
return 0;
}
//1 2 3 4 5 6
//6 1 2 3 4 5
//6 1 5 2 3 4 
//6 1 5 2 4 3