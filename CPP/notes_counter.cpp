#include<iostream>
using namespace std;
int main(){
    int money,i ;
    int coth=0, cofh=0, coh=0, cof=0, cot=0;
    int rem_money;
    cout<<"Enter total money : ";
    cin>>money;
        while(money>0){
            if(money>=1000){
                money = money-1000;
                coth++;
            }
            else if (money >=500)
            {
                money = money-500;
                cofh++;
            }
            else if (money>=100)
            {
                money = money-100;
                coh++;
            }
            else if (money>=50)
            {
                money= money -50;
                cof++;
            }
            else if (money >= 10)
            {
                money = money-10;
                cot++;
            }
            else{
                money = money;
                break;
            }
        }
        cout<<"Count of 1000 : "<<coth<<endl;
        cout<<"Count of 500 : "<<cofh<<endl;
        cout<<"Count of 100 : "<<coh<<endl;
        cout<<"Count of 50 : "<<cof<<endl;
        cout<<"Count of 10 : "<<cot<<endl;
        cout<<"Remaining change : "<<money<<endl;
    return 0;
}