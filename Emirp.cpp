#include <iostream>
#include <algorithm>
using namespace std;
bool is_prime(int num)
{
    int i = 0;
    for (i = 2; i < num; i++)
    {
        if (i == num)
        {
            continue;
        }
        else if (num % i == 0)
            return false;
    }
    return true;
}

void Emirp(int start, int end)
{
    int i = 0;
    int temp;
    string str = "";
    for (i = start; i < end; i++)
    {
        if (is_prime(i) && i > 9)
        {
            str += to_string(i);
            reverse(str.begin(), str.end());

            if (is_prime(stoi(str)))
            {
                cout << i << endl;
            }
            str="";
        }
    }
}
int main()
{
    Emirp(1, 150);
    return 0;
}