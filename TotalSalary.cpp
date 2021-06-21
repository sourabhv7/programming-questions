#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int total_salary(int salary,char grad){
    
    salary+=round((salary*.2)+(salary*.5)-(salary*.11));

    if(grad=='A'|| grad=='a') salary+=1700;
    else if(grad=='B'|| grad=='b') salary+=1500;
    else if(grad=='C'|| grad=='c') salary+=1300;

    return salary;
}

int main(){
    int salary;
    char grad;
    cout<<"enter Salary: ";
    cin>>salary;
    cout<<"Choose Grad \n  ->A\n  ->B\n  ->C\n Grad : ";
    cin>>grad;
    
cout<<"Total salary : "<<total_salary(salary,grad);
return 0;
}

