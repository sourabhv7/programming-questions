#include<iostream>
using namespace std;
void lcm_hcf(int a,int b){
    int Max = max(a,b),Min = min(a,b),rem = Max%Min;
    while(rem){
        Max=Min;
        Min = rem;
        rem = Max%Min;
    }
    cout<<"\nLcm = "<<(a*b)/Min;
    cout<<"\nHcf = "<<Min;
}
int main(){
    int n1,n2;
    cout<<" Num1 - ";
    cin>>n1;
    cout<<" Num2 - ";
    cin>>n2;
lcm_hcf(n1,n2);
return 0;
}
