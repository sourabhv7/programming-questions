#include<iostream>
using namespace std;

void dayCalculotor()
{
    // d1,m1 and y1 represents the date of birth
    // d2,m2 and y2 represents the current date
    // dim is for storing days in months of m2
    
    int i,d1,d2,m1,m2,y1,y2,days=0,months,m1_days=0,year,leapyear;

    int dim[]={31,28,31,30,31,30,31,31,30,31,30,31};

    cout << "Enter the DOB in correct manner : ";
    cin >> d1 >> m1 >> y1;
    cout << "Enter the Current Date : ";
    cin >> d2 >> m2 >> y2;

    if(d2>d1)
    {
        days=d2-d1;
    }
    else
    {
        m2--;
        d2+=dim[m2];
        days=d2-d1;
    }
    if(m2>m1)
    {
        months=m2-m1;
        for(i=0; i<months; i++)
        {
            days+=dim[i];
        }
    }
    else
    {
        y2--;
        for(i=0; i<m2; i++)
        {
            days+=dim[i];
        }
        days+=365;
        for(i=0; i<m1; i++)
        {
            m1_days+=dim[i]; 
        }
        days=days-m1_days;
    }

    year=y2-y1;
    leapyear=year/4;
    year=year*365;
    days+=year+leapyear;

    cout << "Total days are : " << days;
}
int main()
{
    dayCalculotor();
    return 0;
}