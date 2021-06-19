//Code By Sourabh Verma
/*Today's Question:- Write a Program to chech strength of password. If the input password fulfill the following condition return true else print the specific condition fails.
Condition-
1. Lenth must be 8 - 12 characters.
2. Include one uppercase character.
3. Include one lowercase character.
4. Include one special character.
5. Include one numbers.

Input - Code&?0101
Output - Strong Password.

Input - code0101
Output - Uppercase missing
        Special Character missing.*/

#include<iostream>
using namespace std;

void validatepass(string pass){
    bool upper = false, lower = false, num = false, sp_char = false;
    int i;
    for(i = 0; i<pass.length();i++){
        if(pass[i]>='A' && pass[i]<='Z') upper = true;

        else if(pass[i]>='a' && pass[i]<='z') lower = true;

        else if(pass[i]>='0' && pass[i]<='9') num = true;
        // 33-47 58-64 91-96 123-126 for apecial character I am taking ascii value
        else if((pass[i]>=char(33) && pass[i]<=char(47)) ||(pass[i]>=char(58) && pass[i]<=char(64)) || (pass[i]>=char(91) && pass[i]<=char(96)) || (pass[i]>=char(123) && pass[i]<=char(126))) sp_char = true;
    }
    if(upper & lower & num & sp_char) cout<<"Strong password.";
    else{
        if(!upper) cout<<"Uppercase missing"<<endl;
        if(!lower) cout<<"Lowercase missing"<<endl;
        if(!num) cout<<"Number missing"<<endl;
        if(!sp_char) cout<<"Special Character missing"<<endl;
    }

}
int main()
{
    string pass;
    a:
    cout<<"Enter your password : ";
    cin>>pass;
    //cout<<pass.length();
    if(pass.length()>=8 && pass.length()<=12){
        validatepass(pass);

    }
    else{
        cout<<"Password length must be 8 to 12 character."<<endl;
        goto a;
    }
    return 0;
}   