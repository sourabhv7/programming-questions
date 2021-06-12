#include<iostream>
using namespace std;
int main(){
    int i , row;
    cout<<"Enter the no . of rows (should be >=5 ) : ";
    cin >> row;
    for(i = 1 ; i <= row/2 ;i ++ ){
        for(int j =0 ; j<i; j++){
            cout<<"*"; 
        }
        for(int j = 0 ; j < row-2*i; j++){
            cout<<" ";
        }
        for(int j = 0 ; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i = (row/2) ; i >= 1 ;i -- ){
        for(int j =0 ; j<i; j++){
            cout<<"*"; 
        }
        for(int j = 0 ; j < row-2*i; j++){
            cout<<" ";
        }
        for(int j = 0 ; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}