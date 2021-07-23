/*
    Code by : Rohit Patil
    question: 
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
using namespace std;
#include<math.h>
#include<set>
bool Happy_no(int num)
{
    int n,res,temp;
    bool ans;
    set<int> st;
    while(num>0)
    {
        if(num==1) 
        {
            ans=true; break;
        }
        res=0;n=num;
        while(n>0)
        {
            temp=n%10;
            res+=pow(temp,2);
            n/=10;
        }
        if(st.find(res)!=st.end()) 
        {   
            ans=false;
            break;
        }
        st.insert(res);
        num=res;
    }
    return ans;
}
int main()
{
    int n=1;
    cout << "\nFollowing are the happy nubers from 1 to 100 : \n\n";
    while(n<=100)
    {
        if(Happy_no(n))
        cout << n << ' ';
        n++;
    }
    cout << "\n\n";
    return 0;
}