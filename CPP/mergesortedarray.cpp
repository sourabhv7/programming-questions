/*  Code By Sourabh Verma - July 30
    Given two sorted arrays, the task is to merge them in a sorted manner.
    Examples: 

    Input: arr1[] = { 1, 3, 4, 5}, arr2[] = {2, 4, 6, 8} 
    Output: arr3[] = {1, 2, 3, 4, 4, 5, 6, 8}
    Input: arr1[] = { 5, 8, 9}, arr2[] = {4, 7, 8} 
    Output: arr3[] = {4, 5, 7, 8, 8, 9}
*/

#include <bits/stdc++.h>
using namespace std;
void mergerarray(int arr1[], int arr2[], int n1, int n2 ){
    int n = n1+n2;
    int newarray[n] ; 
    for (int i = 0; i < n; i++)
    {
        newarray[i] = arr1[i];
        if(i>=n1){
            newarray[i] = arr2[i-n1];
        }
    }
    sort(newarray,newarray + n);
    for (int i = 0; i < n; i++)
    {
        cout<<newarray[i]<<" ";
    } 
}
int main()
{   int n1 = 5, n2 = 4;
    int arr1[n1] {8,8,7,8,0};
    int arr2[n2] = {2,7,9,5};
    mergerarray(arr1,arr2,n1,n2);    
    return 0;
}