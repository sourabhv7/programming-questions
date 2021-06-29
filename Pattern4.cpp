#include<iostream>
using namespace std;
void fun(int row){
    int i,j,k;
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++)cout<<j<<" ";
        for(k=j-2;k>0;k--)cout<<k<<" ";
        cout<<endl;
    }
}
int main(){
    int row;
    cout<<"enter row number : ";
    cin>>row;
    fun(row);
    return 0;
}