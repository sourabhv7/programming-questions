/*
    Code by : Rohit Patil
    Question : Program to do Arithmatic Operations. (I have used Templates for more reliability)
*/

#include<iostream>
using namespace std;

template <class T>
T Sum(T num1,T num2)
{
    return (num1+num2);
}
template <class T>
T Substract(T num1,T num2)
{
    return (num1-num2);
}
template <class T>
T Mutliply(T num1,T num2)
{
    return (num1*num2);
}
template <class T>
T Divide(T num1,T num2)
{
    return (num1/num2);
}
int Mod(int num1,int num2)
{
    return (num1%num2);
}
int main()
{
    cout << "\nEnter the num1 and num2 : ";
    float num1,num2;
    int ch;
    cin >> num1 >> num2;
    cout << "\n1. For Addition\n2. For Substraction\n3. For Division\n4. For Multiplication\n5. For Modulus\n\nSelect your choise : ";
    cin >> ch;
    switch (ch)
    {
    case 1: cout << "Result : " << Sum(num1,num2);
        break;
    case 2: cout << "Result : " << Substract(num1,num2);
        break;
    case 3: cout << "Result : " << Divide(num1,num2);
        break;
    case 4: cout << "Result : " << Mutliply(num1,num2);
        break;
    case 5: cout << "Result : " << Mod(num1,num2);
        break;
    }
    return 0;
}