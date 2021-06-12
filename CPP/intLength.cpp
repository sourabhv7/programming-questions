//Code By Sourabh Verma.
//Q. Write a program to count number of digits in an integer without string.

#include<iostream>
using namespace std;

int intLength(int num){
    int length = 1;
    if (num<10) length = 1;
    else if ( num >=10 && num <=99) length = 2;
    else if ( num >=100 && num <=999) length = 3;
    else if ( num >=1000 && num <=9999) length = 4;
    else if ( num >=10000 && num <=99999) length = 5;
    else if ( num >=100000 && num <=999999) length = 6;
    else if ( num >=1000000 && num <=9999999) length = 7;
    else if ( num >=10000000 && num <=99999999) length = 8;
    else if ( num >=100000000 && num <=999999999) length = 9;
    else if ( num >=1000000000 && num <=9999999999) length = 10;
    return length;
}
int main(){
    int input;
    cout<<"Enter any number : ";
    cin>>input;
    int a = intLength(input);
    cout<<a;
    return 0;
}