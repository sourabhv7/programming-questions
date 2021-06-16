#include<iostream>
using namespace std;

bool isbalance(string s)
{
    int len=s.size();
    if(len%2==0)
        return false;
    else
    {
        int LHS=0,RHS=0,i=(len/2)-1,j=(len/2)+1;
        
        while (i>=0)
        {
            LHS+=s[i]-'0';
            RHS+=s[j]-'0';
            i--;j++;
        }
        if(LHS==RHS)
            return true;

        return false;   
    }
}
int main()
{
    string str;
    cout << "\nEnter any number to check its state : ";
    cin >> str;
    if(isbalance(str))
    {
        cout << str << " is a balanced string\n";
    }
    else
    {
        cout << str << " is not a balanced string\n";
    }
    return 0;
}