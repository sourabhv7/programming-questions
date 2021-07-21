/*
    WAP  to check an integer whether it is Happy No. or not.
    A number is called happy if it leads to 1 after a sequence of steps wherein each step number is replaced by the sum of squares of its digit that is if we start with Happy Number and keep replacing it with digits square sum, we reach 1.
    Example:

    Input: n = 19
    Output: True 19 is Happy Number,
    1^2 + 9^2 = 82
    8^2 + 2^2 = 68
    6^2 + 8^2 = 100
    1^2 + 0^2 + 0^2 = 1
    As we reached to 1, 19 is a Happy Number.
*/

#include<iostream>
#include<math.h>
using namespace std;

int happynum(int num){
    int rem = 0,sum=0;
        while (num>0)
        {
            rem = num % 10;
            sum = sum + (rem*rem);
            num = num/10;
            
        }
        return sum;

}

int main()
{
    int n;
    cout<<"Enter any number to check whether it is happy or not : ";
    cin>>n;
    int res = n;
    while(res != 1 && res !=4){
        res = happynum(res);
    }
    if(res == 1) cout<<"Happy";
    else if(res ==4) cout<<"Not Happy";
    
    return 0;
}