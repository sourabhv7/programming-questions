#include <iostream>
using namespace std;

void addition(int num1, int num2)
{
    int temp1 = num1, temp2 = num2,sum = 0, sub = 0, carry = 0, b = 0;
    while (num2 != 0){

        //for addition          //for subtraction
        sum = num1 ^ num2;      sub = temp1 ^ temp2;
        carry = num1&num2;      b = ~temp1 & temp2;
        num1 = num1 ^num2;      temp1 = temp1 ^ temp2;
        num2 = carry << 1;      temp2 = b << 1;

    }
    cout<<"Addition  is : " << sum <<endl;
    cout<<"Subtraction is : " << sub <<endl;
}

int main()
{
    int num1,num2;
    cout<<"enter two number  :";
    cin>>num1>>num2;
    addition(num1,num2);
    return 0;
}