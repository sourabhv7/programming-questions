#include<iostream>
using namespace std;

void check_validation(string pass)
{
    int count=0;
    int cap=0,samall=0,dec=0,sym=0,i=0;
    if(pass.length()<8)
        cout << "Length must be at least of 8 characters";
    else
    {
        while (i<pass.length())
        {
            if (pass[i]>='A'&&pass[i]<='Z')
            {
                cap=1;
            }
            else if(pass[i]>='a'&&pass[i]<='z')
                samall=1;
            else if(pass[i]>='0'&&pass[i]<='9')
                dec=1;
            else if(pass[i]=='!'||pass[i]=='~'||pass[i]=='@'||pass[i]=='#'||pass[i]=='$'||pass[i]=='%'||pass[i]=='^'||pass[i]=='&'||pass[i]=='*'||pass[i]=='-'||pass[i]=='+')
                sym=1;
            i++;
        }
    
        if(cap&samall&dec&sym) cout << "Strong Password";

        else
        {
            if(cap==0) cout << "Upper Case Missing\n";
            if(samall==0) cout << "Lower Case Missing\n";
            if(dec==0) cout << "Decimal are Missing\n";
            if(sym==0) cout << "Special Character is Missing\n";
        }
    }
    
}
int main()
{
    string pass;
    cout << "Enter Your Password to check its validation : ";
    cin >> pass;

    check_validation(pass);
    return 0;
}