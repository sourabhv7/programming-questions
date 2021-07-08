/*
    Code By : Rohit Patil
    Question : Code for the Pascal's triangle

*/

#include<iostream>
using namespace std;
#include<vector>

void pascal_triangle(vector<vector<int>> &v,int row)
{
    if(row==0) return;

    vector<int> temp{1};
    v.push_back(temp);

    for(int i=1; i<row; i++)
    {
        temp.clear();
        temp.push_back(1);
        for(int j=0; j<i-1; j++)
        {
            int k=v[i-1][j]+v[i-1][j+1];
            temp.push_back(k);
        }
        temp.push_back(1);
        v.push_back(temp);
    }
}
void print_triangle(vector<vector<int>> &v,int row)
{
    for(int i=0; i<v.size(); i++)
    {
        for(int s=0; s<row-i-1; s++)
        {
            cout << ' ';
        }
        for(int j=0; j<v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int row,t;
    cout << "Enter no of tese cases : "; cin >> t;
    vector<vector<int>> v;
    while(t--)
    {
        cout << "\nEnter the number of Rows : ";
        cin >> row;
        cout << "\n";
        pascal_triangle(v,row);
        print_triangle(v,row);
        cout << "\n";
        v.clear();
    }
    
    return 0;
}