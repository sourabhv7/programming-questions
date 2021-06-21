#include <iostream>
#include <math.h>
using namespace std;
int counter(int num)
{
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    return count;
}
void armstrong(int num)
{
    int temp = num,disit = counter(num),ans = 0,rem = 0;
    for (int i = 1; i <= disit; i++)
    {
        rem = num % 10;
        ans += (pow(rem, disit));
        num /= 10;
    }
    if (ans == temp)
        cout << temp << " is armstrong number" << endl;
}
int main()
{
    int start, end;
    cout << "Start : ";
    cin >> start;
    cout << "End : ";
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        armstrong(i);
    }
    return 0;
}