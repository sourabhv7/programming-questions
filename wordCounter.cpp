#include<iostream>
using namespace std;
int counter(string str){
    int i=0,count=1;
    while(str[i]!='\0'){
        if((str[i]==' ') && str[i+1]!=' ')count++;
        i++;
    }  
    return count;    
}
int main(){
    string str  ;
    cout<<"enter sentence : " ;
    getline(cin,str);
    cout<<counter(str);
return 0;
}