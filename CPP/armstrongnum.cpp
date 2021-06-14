/*Code By Sourabh Verma
WAP to print armstrong number in given interval ?

Input : it contains two numbers separated by single space, which represent start and end of interval.
Output: It consists of all the armstrong number in between interval, and every number separated by single space.
*/
#include<iostream>
#include<math.h>
using namespace std;

int power(int num){
    int count = 0;
    while(num>0){
        num /= 10;
        count ++;
    }
    return count;
}

bool armstrongnum(int num){
    int rem = 0,new_num = num;
    int a = 0, p = power(num);
    while (num>0)
    {   
        rem = num%10;
        num /= 10;
        a += pow(rem,p);       
    }
    if(new_num==a) return true;
    return false;
}

int main()
{
    int start , end , n;
    cout<<"Enter starting and ending point : ";
    cin>>start>>end;
    for(n = start; n <end ; n++){
        if(armstrongnum(n)) cout<<n<<endl;
    }
    return 0;
}