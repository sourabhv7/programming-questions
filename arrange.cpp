#include<iostream>
#include<algorithm>
using namespace std;

//printing
void printArray(int *arr,int n){
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}

//sorting
void sortArray(int *arr,int n){
    int count0=0,count1=0;
    for(int i =0;i<n;i++){
        if(arr[i]==0)count0++;
        else if(arr[i]==1)count1++;
    }
    for(int i = 0;i<n;i++){
        if(count0!=0){
            arr[i]=0;
            count0--;
        }
        else if(count1!=0){
            arr[i]=1;count1--;
        }else
            arr[i]=2;    
    }
    printArray(arr,n);
}

//Direct method
void sortArray2(int *arr,int n ){
    sort(arr,arr+n);
    printArray(arr,n);
}

int main(){
int arr[10] = {1,2,0,1,2,0,1,2,0,0};
sortArray(arr,10);
return 0;
}