/*
    Code By Sourabh Verma
    WAP to display the lower triangular matrix
    Input:
    Matrix a = [1 2 3]  
                [8 6 4]  
                [4 5 6]  
    Output:
    Lower triangular matrix: [1 0 0]
                            [8 6 0]
                            [4 5 6]
*/
#include<iostream>
using namespace std;

int main()
{
    int row, col;
    row = col = 3;
    int arr[row][col] = {{1,2,3},{4,5,6},{7,8,9}};
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }cout<<"~~~~~~~~\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i-j<0) arr[i][j]=0;
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}