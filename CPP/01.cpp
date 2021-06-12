#include <iostream>
using namespace std;

int main() {
    int x , fact = 1;
    cin>>x;
    if(x==0){
        fact = 1;
        cout<<fact;
    }
    else if(x>0)
    {
    for (int i = x; i > 0; i--)
    {
        fact *= i;
    }
    cout<<fact;
    }
    else if(x<0){
       cout<<"Error";
    }
    
    
    return 0;
}