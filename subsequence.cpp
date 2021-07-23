/* 
    Code by : Rohit Patil
    Question : program to print all possible sub sequences of given string

*/

#include<iostream>
using namespace std;

void sub_seq(string res,int ind,int len,string s)
{
    if(ind==len)
    {
        cout <<"(" << res << "), ";
    }
    else
    {
        sub_seq(res,ind+1,len,s);
        res+=s[ind];
        sub_seq(res,ind+1,len,s);
    }
}
int main()
{
    int t;
    string s;
    cout << "\nEnter no of test cases : ";
    cin >> t;
    while(t--)
    {
        cout << "\nInput  : ";
        cin >> s;
        cout << "Output : ";
        sub_seq("",0,s.length(),s);
        cout << "\n";
    }
    cout << "\n";

    return 0;
}