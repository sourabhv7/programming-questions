#include<iostream>
using namespace std;

void fun(int n)
{
    if(n==0) return;
    cout << "pre" << n << " ";
    fun(n-1);
    cout << "in" << n << " ";
    fun(n-1);
    cout << "post" << n << " ";
}
int main()
{
    fun(3);

    return 0;
}