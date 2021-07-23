#include<iostream>
using namespace std;

bool is_lucky(int n,int count)
{
    if(count>n)
    {
        return true;
    }
    else if(n%count==0) 
    {
        return false;
    }
    return is_lucky(n-n/count,count+1);
}
int main()
{
    int t,n;
    cout << "\nEnter the no of test cases : ";
    cin >> t;
    while(t<100)
    {
        // cout << "Enter any number : ";
        // cin >> n;
        if(n==0)
            cout << -1;
        else
        {
            if(is_lucky(t,2))
                cout << t << " is Lucky number.....................";
            else
                cout << t << " is not a Lucky number !  ";
        }
        cout << "\n\n";
        t++;
    }
    return 0;
}