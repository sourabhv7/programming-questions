#include<iostream>
using namespace std;
void calc(float num1,float num2,char opt){
    switch(opt){
        case '+':
        cout<<num1+num2<<endl;
        break;
        case '-':
        cout<<num1-num2<<endl;
        break;
        case '*':
        cout<<num1*num2<<endl;
        break;
        case '/':
        cout<<num1/num2<<endl;
        break;
       default :
        cout<<"Enter valid operator "<<endl;
        break;
    }
}
int main(){
    char opt;
    float num1,num2;
cout<<"Enter in this formate [operand <-space-> operator <-space-> operand]"<<endl;
cin>>num1>>opt>>num2;
calc(num1,num2,opt);
return 0;
}