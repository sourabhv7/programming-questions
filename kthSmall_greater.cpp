#include<iostream>
#include<algorithm>
using namespace std;
void small_greater(int *arr,int n ,int k){
    if(k>n){
        cout<<"k should not be greater then n";
        return;
    }
  sort(arr,arr+n);
  cout<<k<<"th smallest element : "<<arr[k-1]<<endl;
  cout<<k<<"th greater element : "<<arr[n-(k)]<<endl;
}
int main(){
int arr[7] = {1,2,3,4,5,6,8};
int k;
cout<<"enter the value of k : ";
cin>>k;
small_greater(arr,7,k);
return 0;
}

// 1 2 3 4 5 6 7 8 9 