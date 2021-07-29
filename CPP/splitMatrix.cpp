/*  Code BY Sourabh Verma   - July 29
    WAP to split and then print the value of square matrix.   
    If possible, try to make without square  matrix.
    Ex.  1 2 3
            4 5 6
            7 8 9
    Output-
    9 8 7
    6 5 4
    3 2 1

    In my code I create for both square and non-square matrix.
        --> Just change the values of row and column and the elements of matrix.
*/

#include<iostream>
using namespace std;

int main()
{
    int row = 3;
    int col = 3;
    int arr[row][col]= {{1,2,3},{4,5,6},{7,8,9}};
    int newarr[row][col];
    int a = row-1;
    int b;
    cout<<"Before-->\n";
    for (int i = 0; i < row; i++)
    {   b = col-1;
        for (int j = 0; j < col; j++)  
        {
            cout<<arr[i][j]<<" ";
            newarr[i][j]=arr[a][b];
            b--;
        }a--;
        cout<<endl;
    }
    cout<<"\nAfter-->\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<newarr[i][j]<<" ";
        }
        cout<<endl; 
    }
 
    return 0;
}