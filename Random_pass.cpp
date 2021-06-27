#include<iostream>
#include<time.h>
using namespace std;
#include<stdlib.h>

string cap_small()
{
    srand(time(0));
    string pass="";
    int cap=rand()%25+1;
    char c=cap+65;
    pass+=c;
    int r;
    char ch;
    for(int i=0; i<4; i++)
    {
        r=rand()%25+1;
        ch = r+96;
        pass+=ch;
    }
    return pass;
}

string spec_num()
{
    int r; 
    string num="";
    srand(time(0));
    num+=rand()%5+33;
    r=rand()%10000+11;
    num+=to_string(r);
    return num;
}
int main()
{
    int r;
    string password="";
    password+=cap_small();
    password+=spec_num();
    cout << "\nYour password is : ";
    cout << password << endl << endl;

    return 0;
}