#include <iostream>
using namespace std;
void counter(long long num)
{
    int count = 0;
    if(num==0){
        cout<<"1";   
        return ;
    }
    while (num > 0){
        if(num>=INT32_MAX){
            num/=INT32_MAX;
            count+=10;
        }
        if (num >= 10000){
            num /= 10000;
            count += 4;
        }
        if (num >= 1000 && num < 10000){
            num /= 1000;
            count += 3;
        }
        num /= 10;
        count++;
    }
    cout<<count;
}
int main()
{
    long long num;
        cout<<"\nenter number : ";
        cin>>num;
     counter(num);
    return 0;
}