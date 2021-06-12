#include<iostream>
using namespace std;

int main(){
    string ones[20] =  {"","One ","Two ", "Three ", "Four ", "Five " ,"Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifeteen ", "Sixteen " , "Seventeen " ,"Eighteen ", "Nineteen "};
    string tens[10] = {"","" ,"Twenty ","Thirty ","Fourty ","Fifety ","Sixty ","Seventy ","Eighty ","Ninety "};
    int num , temp;
    string word = "";
    cout<<"Enter any no. ";
    cin>>num;
    if(num<=9999999 && num > 0){
        if(num>=100000){
            temp = num / 100000;
            num = num % 100000;
            if(temp<=19){
                word = word + ones[temp] + "Lakh ";
            }
            else if(temp > 19){
                //cout<<temp<<endl;
                word = word + tens[temp/10];
                temp %= 10;
                //cout<<temp;
                if(temp>0){
                    word = word + ones[temp] + "Lakh ";
                }
                else{
                    word += "Lakh ";
                }
            }
        }

        if(num>=1000){
            temp = num / 1000;
            num = num % 1000;
            if(temp<=19){
                word = word + ones[temp] + "Thousand ";
            }
            else if(temp > 19){
                //cout<<temp<<endl;
                word = word + tens[temp/10];
                temp %= 10;
                //cout<<temp;
                if(temp>0){
                    word = word + ones[temp] + "Thousand ";
                }
                else{
                    word += "Thousand ";
                }
            }
        }

        if(num>=100){
            temp = num / 100;
            num = num % 100;
            if(temp<=19){
                word = word + ones[temp] + "Hundred ";
            }
            else if(temp > 19){
                //cout<<temp<<endl;
                word = word + tens[temp/10];
                temp %= 10;
                //cout<<temp;
                if(temp>0){
                    word = word + ones[temp] + "Hundred ";
                }
                else{
                    word += "Hundred ";
                }
            }
        }

        if(num > 19){

            word = word + tens[num/10];
            num %= 10;
        }
        if(num <= 19){
            word = word + ones[num];            
        }
    }
    else if(num == 0)
    {
        cout<<"Bhai ZERO likha hai tune ";
    }
    
    else{
        cout<<"Bhai ye no. meri aukat se bahar hai abhi ";
    }
    cout<<"-->"<<word;
    return 0;
}