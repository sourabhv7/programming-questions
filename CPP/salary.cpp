#include<iostream>
#include <cmath>
using namespace std;

float totalSalary(float sal, char gr){
    int allow;
    float da = sal*50/100;
    float hra = sal*20/100;
    float pf = sal*11/100;
    if(gr=='A' || gr == 'a'){
        allow = 1700;
    }
    else if(gr=='B' || gr == 'b'){
        allow = 1500;
    }
    else if(gr=='C' || gr == 'c'){
        allow = 1300;
    }
    float tSalary = sal + hra + da + allow - pf;
    return tSalary;
}
int main(){
    int basic;
    char grade;
    cout <<"Enter your salary.: ";
    cin>>basic;
    cout<<"Enter your grade: ";
    cin>>grade;
    putchar(toupper(grade));
    
    int total = round(totalSalary(basic,grade));
    cout<<"Your total salary is "<<total;
}