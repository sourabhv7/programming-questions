#include <iostream>
#include <math.h>
using namespace std;
int Days(int DD, int MM, int YY)
{
    int i = 0, dd, mm, yy, TotalDays = 0, DaysCount = 0;

    int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Enter today's date \n Day : ";
    cin >> dd;
    cout << "Month : ";
    cin >> mm;
    cout << "Year : ";
    cin >> yy;

    if(dd > arr[mm] || DD > arr[MM] || mm > 12 || MM > 12 || yy<YY){
        cout<<"Wromg input";
        exit(0);
    }
   

    TotalDays += arr[MM] - DD;

    for (i = MM + 1; i < 13; i++)
        TotalDays += arr[i];

    DaysCount += (arr[mm] - dd);
    for (i = mm + 1; i < 13; i++)
        DaysCount += arr[i];

    int year = yy - YY;
    TotalDays += ((year * 365) - DaysCount);

    return TotalDays ;//+= roundf(year / 4.0);
}
int main()
{
    int dd, mm, yy;
    cout << "Enter your's birth date \n Day : ";
    cin >> dd;
    cout << "Month : ";
    cin >> mm;
    cout << "Year : ";
    cin >> yy;
    cout << Days(dd, mm, yy) << " days";

    return 0;
}