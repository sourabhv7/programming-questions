#include<iostream>
using namespace std;
// int HCF(int c,int d);    // uncomment it if you want to use it

void LCMandHCF(int a,int b)
{
    int i,max,LCM,HCF,end=a*b;
    max=(a>b)?a:b;

    while (max<=end)
    {
        if(max%a==0&&max%b==0)
        {
            LCM=max;
            break;
        }
        max++;
    }
    cout << "\nLCM of " << a << " and " << b << " is : " << LCM << endl;

    HCF=(end/LCM); // LCM*HCF = num1*num2 : this is the direct formula for calculating any of them. or i also have created seperate fun for HCF

    cout << "\nHCF of " << a << " and " << b << " is : " << HCF << "\n\n";
}
int main()
{
    int num1,num2;
    cout << "\nEnter the num1 and num2 seperated by single space : ";
    cin >> num1 >> num2;
    LCMandHCF(num1,num2);

    return 0;
}

// For finding the HCF seperatly
// int HCF(int c,int d)
// {
//     while (c!=d)
//     {
//         if(c>d)
//             c=c-d;
//         else
//             d=d-c;
//     }
//     return c;
// }
