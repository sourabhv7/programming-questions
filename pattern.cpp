#include <iostream>
using namespace std;
bool is_prime(int num){
    int i = 2;
    while (i <= num / 2){
        if (num % i == 0)
            return false;
        i++;
    }
    return true;
}
void pattern(int row){
    int i = 0,j = 0,num = 4,count=0;
    for (i = 1; i <= row; i++){
        for (j = 1; j <= i; j++){
            if (!is_prime(num) ){
                cout << num << " ";
                num++;  
            }
            if(is_prime(num) )
                num++;
        }
        cout << endl;
    }
}

int main(){
    int row;
    cout<<"enter row number :";
    cin>>row;
    pattern(row);
    return 0;
}