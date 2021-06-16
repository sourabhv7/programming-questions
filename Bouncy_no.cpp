#include<iostream>
using namespace std;

bool isincreasing(string &arr,int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}
bool isdecreasing(string &arr,int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]<arr[i+1])
            return false;
    }
    return true;
}
int main()
{
    int num=101;
    int len,i,count=1;
    string s;
    bool one,two;
    cout << endl << "Following are the Bouncy Numbers for 101 to 1000 : " << endl;

    for(num; num<=1000; num++)
    {
        s=to_string(num);
        len=s.length();
        one=isincreasing(s,len);
        two=isdecreasing(s,len);
        if(!(one||two))
        {
            cout << count << ") --> " << num << endl;
            count++;
        }
    }
    return 0;
}