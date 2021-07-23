#include<iostream>
using namespace std;

string rem_char(string s)
{
    string s1="";
    for(int i=0; i<s.length(); i++)
    {
        if(!(s[i]>='a' and s[i]<='z' || s[i]>='A' and s[i]<='Z' || s[i]==' '))
        {
            s1+=s[i];
        }
    }

    s1[s1.length()]='\0';
    return s1;
}
int main()
{
    int t;
    string s;
    cout << "\nEnter no. of test case : ";
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cout << "\nEnter any sentence : ";
        getline(cin,s);
        s=rem_char(s);
        cout << s << endl;
    }
    return 0;
}