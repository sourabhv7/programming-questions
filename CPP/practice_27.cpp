#include<iostream>
using namespace std;
int main(){
    int dec, rem ;
    cin>>dec;
    do
    {
        rem = 2 % dec;
        dec = 2 / dec;
        cout<<rem;
    } while (dec >= 1);
    
   
return 0;
}