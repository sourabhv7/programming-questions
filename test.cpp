#include<iostream>
using namespace std;
int main(){
    short hr, min, sec, temp;
    char ch;
    string apm;
    cout<<"Enter the time in 12 hr format : ";
    cin>>hr>>ch>>min>>ch>>sec>>apm;
    if(apm=="am" || apm == "AM"){
        sec = sec+45;
        if(sec>=60){
            temp = sec-60;
            sec = temp;
            min++;
        }
        min = min+45;
        if(min>=60){
            temp = min-60;
            min = temp;
            hr++;
        }
        if(hr==12 || hr==13){
            hr = hr - 12;
        }  
    }
    else if(apm=="pm" || apm == "PM"){
        sec = sec+45;
        if(sec>=60){
            temp = sec-60;
            sec = temp;
            min++;
        }
        min = min+45;
        if(min>=60){
            temp = min-60;
            min = temp;
            hr++;
        }  
        if(hr != 12){
            hr= hr+12;
        }
    }
    cout<<"Time in 24 hrs after increasing 45 min. and 45 sec. "<<hr<<":"<<min<<":"<<sec;

    return 0;
}