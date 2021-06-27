/*
    Logic by : Rohit Patil
    
    Question : Pattern  
    
    1
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
    
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,n=4,k=1;
    cout << "\nEnter the number of rows : ";
    cin >> n;
    cout << "\n";
    for(i=1; i<=n; i++)
    {
        k=1;
        for(j=1; j<=(i*2-1); j++)
        {
            cout << k << " ";
            (j<=(i*2-1)%i) ? k++ : k--;

            // Above two lines are perform same task as this below 10 line of code do, 
            //if you are unable to understood above two line then prefer it
            // if(j<=(i*2-1)%i)
            // {
            //     cout << k << " ";
            //     k++;
            // } 
            // else
            // {
            //     cout << k << " ";
            //     k--;
            // }
        }
        cout << endl;
    }

    return 0;
}