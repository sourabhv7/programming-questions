/*  Code By Sourabh Verma
    Today's question
    Print pattern like:
    1
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
*/
#include<iostream>
using namespace std;

int main()
{
    int row ;
    cout<<"Enter value of rows : ";
    cin>>row;
    for(int i = 1; i<=row ; i++){
        for (int  j = 1; j <= i; j++)
        {
            cout<< j;
        }
        for (int k = i-1; k >= 1; k--)
        {
            cout<<k;
        }
        
        cout<<endl;
    }
    return 0;
}