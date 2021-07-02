/*
    Code By Sourabh Verma
    Write a program to shift every element of an array to circularly right. 
    E.g.-
    INPUT  : 1 2 3 4 5
    OUTPUT : 5 1 2 3 4
*/
#include<iostream>
using namespace std;

int shiftNum(int arr[],int l){
    int temp, temp1;
    for (int i = 0; i < l; i++)
    {
        if(i==0){
            temp = arr[i];
            arr[i] = arr[l-1];
        }
        else{
            temp1 = arr[i];
            arr[i] = temp;
            temp = temp1;
        }
    }
    for (int j = 0; j < l; j++)    cout<<arr[j]<<" ";
    cout<<"<--- After";
    return 0;  
}
int main()
{
    int arr[]  = {1,2,3,4,5};
    int l = sizeof(arr)/sizeof(arr[0]);
    for (short k = 0; k < l; k++) cout<<arr[k]<<' ';
    cout<<"<--- Before"<<endl;
    shiftNum(arr,l);    
    return 0;
}