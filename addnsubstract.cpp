/*
    Code by: Rohit Patil

    Question: WAP to add and substract two numbers without arithmatic operators ?

*/

#include<iostream>
using namespace std;

int addition(int a,int b)
{
    int i=b;
    add:    
    i--;a++;
    if(i>0) goto add;
    return a;
}
int substraction(int a,int b)
{
    int i=b;
    add:    
    i--;a--;
    if(i>0) goto add;
    return a;
}
int main()
{
    cout << "Enter the value of num1 num2 with desired Symbol : ";
    int num1,num2;
    char ch;
    cin >> num1 >> ch >> num2;
    
    switch (ch)
    {
    case '+':
        cout << "\nDesired output is : " << addition(num1,num2) << "\n\n";
        break;
    case '-':
        cout << "\nDesired output is : " << substraction(num1,num2) << "\n\n";
        break;
    
    default:
        cout << "\n --->  O dada thoda Symbol dekh to enter kro !\n\n";
        break;
    }

    return 0;
}