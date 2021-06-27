/*
    Code by : Rohit Patil

    Question : Count number of pairs for  specific value or sum in array;

    intput : 5
             1 2 3 4 5
             5

    output : 2
    Explaination : Because, there is only two pairs which can give us 5 as a sum,(1,4) and (2,3). 
*/

#include<iostream>
using namespace std;
#include<unordered_map>

int count_pairs(int a[],int size,int k)
{
    int count=0,expected;
    unordered_map<int,int> m;
    for(int i=0; i<size; i++)
    {
        expected=k-a[i];
        
        if(m[expected]==0)
        {
            m[a[i]]++;
        }
        else
        {
            count+=m[expected];
            m[a[i]]++;            
        }
    }
    return count;
}
int main()
{
    int size,k;
    cout << "\nEnter the size of array : ";
    cin >> size;
    int a[size];
    cout << "Enter elements : ";
    for(int i=0; i<size; i++) cin >> a[i];
    
    cout << "Enter the K value : "; cin >> k;

    cout << "\nNumber of pairs are : " << count_pairs(a,size,k) << "\n\n";

    return 0;
}