/*  Code By Sourabh Verma
    Question is the day - July 22 
    Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. If there is such a triplet present in array, then print the triplet and return true. Else return false.
    Input: array = {12, 3, 4, 1, 6, 9}, sum = 24; 
    Output: 12, 3, 9 
    Explanation: There is a triplet (12, 3 and 9) present 
    in the array whose sum is 24. 
    Input: array = {1, 2, 3, 4, 5}, sum = 9 
    Output: 5, 3, 1 
    Explanation: There is a triplet (5, 3 and 1) present 
    in the array whose sum is 9.
*/
#include<iostream>
using namespace std;

int main()
{
    int array[] ={1, 2, 3, 4, 5}, sum = 9;
    int n = sizeof(array) / sizeof(array[0]);
    for (size_t l = 0; l < n; l++) cout<<array[l]<<" ";
    cout<<"\nSum = "<<sum<<endl;
    for (short i = 0; i < n; i++)
    {
        for (short j = i+1; j < n; j++)
        {
            for (short k = j+1; k < n; k++)
            {
                if(array[i]+array[j]+array[k]==sum){
                    cout<<array[i]<<" + "<<array[j]<<" + "<<array[k]<<" = "<<sum<<endl;
                }
            }
        }
        
    }
    return 0;
}