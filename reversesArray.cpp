#include<iostream>
#include<vector>
using namespace std;
int fun(int n){
    if(n==0)return 0;
    else{
    int sum=fun(n-1);
    return sum+n;
    }
}
int main(){
cout<<fun(5);
return 0;
}