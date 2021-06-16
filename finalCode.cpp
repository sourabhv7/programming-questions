#include<iostream>
using namespace std;

string numberToword(int n)
{
    int num=n,div,rem;
    string once[]={"","one","two","three","four","five","six","seven","eight","nine","ten",
    "eleven","twelve","therteen","fouteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
    string sol="";

        if(n>99999999)
            return "exeed the limit of converter !";
        if(num==0)
            return "zero";
        if(num>=1000000)
        {
            div=num/1000000;
            if(div>=0&&div<=19)
            {
                sol+=once[div];
            }
            else
            {
                rem=div%10;
                div/=10;
                sol+=tens[div-1]+" "+once[rem];
            }
            sol+=" million ";
            num%=1000000;
        }
        if(num>=100000)
        {
           div=num/100000;
           if(div>=0&&div<=19)
           {
               sol+=once[div];
           } 
           else
           {
               rem=div%10;
               div/=10;
               sol=tens[div-1]+" "+once[rem];
           }
           sol+=" lakh ";
           num%=100000;
        }
        if(num>=1000)
        {
            div=num/1000;
            if(div>=0&&div<=19)
            {
                sol+=once[div];
            }
            else
            {
                rem=div%10;
                div/=10;
                sol+=tens[div-1]+" "+once[rem];
            }
            sol+= " thousand ";
            num%=1000;
        }
        if(num>=100)
        {
            div=num/100;
            if(div>=0&&div<=19)
            {
                sol+=once[div];
            }
            else
            {
                rem=num%100;
                sol+=tens[div]+once[rem];
            }
            sol+=" hundred ";
            num%=100;
        }
        if(num<100)
        {
            if(num>=0&&num<=19)
            {
                sol+=once[num];
            }
            else
            {
                rem=num%10;
                div=num/10;
                sol+=tens[div-1]+" "+once[rem];
            }
        }
    return sol;
}
int main()
{
    int num;
    cout << endl << "Enter any number between 0 to 99999999 : ";
    cin >> num;
    
    cout << num << " --> " << numberToword(num) << endl << endl;

    return 0;
}