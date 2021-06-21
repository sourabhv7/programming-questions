#include<iostream>
using namespace std;

bool check_validation(string pass)
{
    int count=0;
    int cap=0,samall=0,dec=0,sym=0;
    for(int i=0; i<pass.size(); i++)
    {
        if((pass[i]>='A'&&pass[i]<='Z'))
        {
            count++;
            break;
        }
    }
        if(count==0)
        {   
            cout << "Must incluse at least one UpperCase character !";
            return false;
        } 

    count=0;
    for(int i=0; i<pass.size(); i++)
    {

        if(pass[i]>='a'&&pass[i]<='z')
        {
            count++; 
            break;
        }
    }
        if(count==0)
        {
            cout << "Must incluse at least one LowerCase character !";
            return false;
        }
    count=0;
    for(int i=0; i<pass.size(); i++)
    {
     
        if(pass[i]>='0'&&pass[i]<='9')
        {
            count++;
            break;
        }
    }
        if(count==0)
        {
            cout << "Must incluse at least one Integer character !";
            return false;
        }
    count=0;
    for(int i=0; i<pass.size(); i++)
    {
        if(pass[i]=='@'||pass[i]=='!'||pass[i]=='~'||pass[i]=='$'||pass[i]=='#'||pass[i]=='%'||pass[i]=='^'||pass[i]=='&'||pass[i]=='*')
        {
            count++;   
            break;
        }
    }
        if(count==0)
        {
                cout << "Must incluse at least one Special Symbol !";
                return false;
        }
    return true;
    
}
int main()
{
    string pass;
    int t=10;
    
    cout << "Enter Your Password to check its validation : ";
    cin >> pass;
    if(check_validation(pass))
    {
        cout << "Strong Password";
    }
    return 0;
}



