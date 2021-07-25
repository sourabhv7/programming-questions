/*  Code By Sourabh Verma
    WAP to search given element in matrix ?
    If found return its row and colum no. else return -1

    Ex : 1 2 3
        4 3 2
        5 6 7
    Input : 1
    Output : 1 is present at [1,1]
*/

#include<iostream>
using namespace std;

int main()
{   int col;
    int row = col = 3 ;
    int arr[row][col] = {
                        {4,3,4},
                        {5,3,0},
                        {7,8,6}
                    };
    int num = 1 ;
    int flag = 0;
    for (short i = 0; i < row; i++)
    {
        for (short j = 0; j < col; j++)
        {
            if(arr[i][j]==num){
                cout<<i+1<<" "<<j+1<<endl;
                flag = 1;  
            }
        }
    }
    if(!flag) cout<<"Not found";
    return 0;
}