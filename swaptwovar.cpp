#include<iostream>
using namespace std;

int main()
{
    int a=20,b=30;
    cout << "Enter the vlaue of a and b : ";
    cin >> a >> b;
    a=a+b;//50
    b=a-b;// 30
    a=a-b; // 30

    cout << "After swaping a is " << a << " and b is  " << b;

    return 0;
}