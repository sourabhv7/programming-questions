#include<iostream>
using namespace std;

void bouncyNumber(){
    cout<<"bhai logo 1000 tak bahut ho jayega to 400 tak hi thik hai"<<endl;
    cout<<"Bouncy number from 100 to 400"<<endl;

    int i,j;
    i=j=0;
    for(i=10;i<40;i++){
        if(i==10){
            for(j=1;j<10;j++){
                cout<<i*10+j<<"      ";
            }
        }
        else if(i%11==0){
            continue;
        }
        else{
            for(j=0;j<i%10;j++)
            cout<<i*10+j<<"      ";
        }
    }
} 

int main(){
bouncyNumber();
return 0;
}