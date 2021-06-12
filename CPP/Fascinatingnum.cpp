#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    cout<<"Fascinating Number \n";
    cout<<"Enter a number between 100 to 999 : ";
    cin>>num;
    if(num >=100 && num <= 999){
        string cnum = to_string(num);
        cout<<cnum<<endl;
        char a = cnum[0];
        char b = cnum[1];
        char c = cnum[2];
        int n1 = sto
        int n2 = b;
        
        cout<<n1 + n2;
    }
    else{
        cout<<"You have entered wrong no. ";
    }
    


    return 0;
}
//no instance of overload function "stoi" matches the argument list