#include<iostream>
using namespace std;

bool fascinat_no(int num,int n)
{
    int num2=num*2,num3=num*3,fhash[10]={0},i;

    string snum=to_string(num)+to_string(num2)+to_string(num3);
    int len=snum.length();

    for(i=0;i<=len; i++)
    {
        fhash[snum[i]-'0']++;
    }

    for(i=1;i<=n;i++)
    {
        // if(fhash[i]==0) what i missed to add here
        if(fhash[i]==0||fhash[i]>=2)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num=100,n=9;
    cout << "Enter any number of least 3 digits : ";
    cin >> num;
    if(fascinat_no(num,n))
    {
        cout << num << " : is a fascinating number.\n\n";
    }
    else
    {
        cout << num << " : is not a fascinating number\n\n";
    }
    // cout << "\nFollowing are the Fascinating numbers from 100 to 1000 -->\n\n";
    // for(num; num<10000; num++)
    // {
    //     if(fascinat_no(num,n))
    //     {
    //         cout << num << " : is a fascinating number.\n\n";
    //     }
    // }
    return 0;
}