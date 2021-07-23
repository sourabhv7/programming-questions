/*
    Code by : Rohit Patil
    Question : 
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
#include<set>

bool solveOn3(int a[],int n,int s)
{
    int i,j,k;
    for(i=0; i<n-2; i++)
    {
        for(j=i+1; j<n-1; j++)
        {
            for(k=j+1; k<n; k++)
            {
                if(a[i]+a[j]+a[k]==s)
                {
                    cout << a[i] << ' ' << a[j] << ' ' << a[k] << " : " << a[i]+a[j]+a[k] << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

bool solveOn2(int a[],int n,int k)
{
    set<int> st;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int x=k-(a[i]+a[j]);
            if(st.find(x)!=st.end())
            {
                cout << a[i] << ' ' << a[j] << ' ' << k-(a[i]+a[j]) << " : " << k << endl;
                return true;
            }
        }
        st.insert(a[i]);
    }
    return false;
}
int main()
{
    // int a[]={12, 3, 4, 1, 6, 9};
    int a[]={1, 2, 3, 4, 5};
    int n=5;
    // bool ans=solveOn3(a,n,15);
    bool ans=solveOn2(a,n,9);
    cout << "Condition : " << ans;

    return 0;
}