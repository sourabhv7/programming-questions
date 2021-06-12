//Fibonacci 
#include<iostream>
using namespace std;
int main(){
    int n,m;
    a:
    cout<<"Enter the staring and ending index value respectively, in the format of m<n : ";
    cin>>m>>n;
    if (m>n || m==n){
        cout<<"You have entered value in wrong format .\nPlease try again."<<endl;
        goto a;
    }
    else{
        int arr[n] = {};
        arr[0] = 0;
        arr[1] = 1;
        for(int i = 2; i <= n; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        for(int j = m-1 ; j < n; j++){
            cout<<arr[j]<<" ";
        }
    }
    return 0;
}