//Code BY Sourabh Verma
/* WAP to calculate sum of all the elements in array.
Note: Size and array must be taken by user*/

#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    int sum = 0,count=0;
    while(count<size){
        sum += arr[count];
        count++;
    }
    return sum;
}

int main()
{
    int i;
    cout<<"Enter size of array : ";
    cin>>i;
    int arr[i] = {};
    cout<<"Enter "<<i<<" array elements :";
    for(int j = 0; j<i;j++){
        cin>>arr[j];
    }
    int sum = sumOfArray(arr,i); 
    cout<<"Sum of all the elements in array = "<<sum;
    return 0;
}