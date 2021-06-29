#include<iostream>
using namespace std;
void fillArray(int *arr,int n){
    cout<<"Fill array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
void subArray(int *arr,int n,int idx ){
    if(idx==n)
        return;
    string res="";
    for(int i =idx;i<n;i++){
        res+=to_string(arr[i])+" ";
        cout<<res<<endl;
    }
    subArray(arr,n,idx+1);
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n] ;
    fillArray(arr,n);
    subArray(arr,n,0);
return 0;
}