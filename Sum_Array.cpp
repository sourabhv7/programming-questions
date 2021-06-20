/*
    Code by: Rohit Patil

    Question: Write a program to calculate the sum of all the elements present in an array
*/

#include<iostream>
using namespace std;
#include<vector>

int Sum_Elements(vector<int> arr)
{
    int sum=0;
    for(int i=0; i<arr.size(); i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    vector<int> arr;
    cout << "\n\nEnter the Size : ";
    int s,element;
    cin >> s;
    cout << "\nEnter all the elemetns : ";
    for(int i=0; i<s; i++)
    {
        cin >> element;
        arr.push_back(element);
    }

    cout << "\nSum of all the Elements is : " << Sum_Elements(arr) << "\n\n";

    return 0;
}