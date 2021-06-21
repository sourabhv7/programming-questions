#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
void passwordChecker(string str)
{
    int sChar = 0, up = 0, low = 0, num = 0;
    if (str.length() < 8)
        cout << "week password (length is less then 8 char.)";


    else {
        int i = 0;
        while (i < str.length()){
            if (str[i] >= 33 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 123 && str[i] <= 126)
                sChar = 1;
            else if (str[i] >= 65 && str[i] <= 90)
                up = 1;
            else if (str[i] >= 97 && str[i] <= 122)
                low = 1;
            else if (str[i] >= 48 && str[i] <= 57)
                num = 1;
            i++;
        }


        if(sChar==1 && up ==1 && low ==1 && num ==1)
            cout<<"strong password\n";


        else if(sChar==0 || up ==0 || low ==0 || num ==0){
            if(sChar==0)cout<<"Special Character missing.\n";
            if(up==0)cout<<"Uppercase missing\n";
            if(low==0)cout<<"Lower missing\n";
            if(num==0)cout<<"Number missing\n";
        }

    }
}
int main(){
    string str ;
    int t=6;
    while(t--)
    {
        cout<<"Enter your password : ";
    getline(cin,str);
   passwordChecker(str);
    }
    return 0;
}

