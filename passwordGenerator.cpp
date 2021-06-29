#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

string randomPasswordgenerator(int len){
    string password = "";
    if(len <8){
        password = "minimum 8 char. Please!";
        return password;
    }
    int left = len / 4,rem = len % 4;
    char randNum;
    srand(time(0));
    while (left--){
        randNum = (rand() % (47 + 1 - 33)) + 33;password += randNum;
        randNum = (rand() % (57 + 1 - 48)) + 48;password += randNum;
        randNum = (rand() % (90 + 1 - 60)) + 60;password += randNum;
        randNum = (rand() % (122 + 1 - 97)) + 97;password += randNum;
    }
    while (rem--){
        randNum = (rand() % (122 + 1 - 97)) + 97; password += randNum;
    }
    return password;
}
int main()
{  
    int range;
    int t=5;
    string pass;
    cout<<"Enter length of password between 8-16 : ";
    cin>>range;
    cout<<randomPasswordgenerator(range);
    return 0;
}
