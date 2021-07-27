/*  Code By Sourabh Verma  -  July 26
    WAP to determine whether given matrix is :
    1) Identity matrix
    2) Sparse matrix

    Also print Transpose of the same matrix
*/
#include<iostream>
using namespace std;

int main()
{
    int col = 4;
    int row = col; //If no. of row and column are same we can also do this --> row = col = 4;
    int arr[row][col] = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
    int countOfOne = 0;
    int countOfZero = 0;
    for(int i = 0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<' ';
            if(i==j){
                if(arr[i][j]==1) countOfOne++;
            }
            else{
                if(arr[i][j]==0) countOfZero++;
            }
        }cout<<endl;
    }
    if(countOfOne==row && countOfZero==row*3)
    cout<<"Identity Matrix\n";
    else
    cout<<"Not an Identity Matrix\n";

    if(countOfZero>(row*col)/2)
    cout<<"Sparse Matrix\n\n";
    else
    cout<<"Not a Sparse Matrix\n\n";

    int temp = row;
    row = col;
    col = temp;
    cout<<"Transform of the Matrix.\n";
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[j][i]<<' '; // I am just printing here in Traspose form,
        }                         // but we can also interchange the values in the matrix.
        cout<<endl;               // Like this --> newarr[i][j] = arr[j][i], and then print this.    
    }
    
    return 0;
}