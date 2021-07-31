/*
    Code By Sourabh Verma - July 31
    Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

    Example 1:

    Input:
    n=9, x=5
    arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
    Output:  2 5
    Explanation: First occurrence of 5 is at index 2 and last
                occurrence of 5 is at index 5. 
    
    Example 2:
    Input:
    n=9, x=7
    arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
    Output:  6 6
    Note : If element not found then set first and last to -1
*/
#include<iostream>
using namespace std;

int main()
{
    int n=9, x;
    cout<<"x = "; cin>>x;
    int arr[n] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int first = -1, last = -1;
    for (short i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
    for (short i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {   first = i;
            break;
        }
    }
    for (short i = n-1; i >= 0; i--)
    {
        if (arr[i]==x)
        {
            last = i;
            break;
        }
    }
    cout<<first<<" "<<last;   
    return 0;
}