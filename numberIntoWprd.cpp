#include <iostream>
#include <vector>
using namespace std;
void numberToWord(int num)
{
    vector<string> nums = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
    string res = "";
    int n=num;
    int temp;
    char a;
    while (num > 0)
    {
  
        if (num >= 100000)
        {
            temp = num / 100000;
            if (temp >= 0 && temp <= 9)
                res += nums[temp];

            else
                res += to_string(temp);

            res += " Lakh ";
            num %= 100000;
        }

        else if (num >= 1000)
        {
            temp = num / 1000;
            if (temp >= 0 && temp <= 9)
                res += nums[temp];

            else
                res += to_string(temp);

            res += " Thousand ";
            num %= 1000;
        }
        else if (num >= 100)
        {
            temp = num / 100;
            if (temp >= 0 && temp <= 9)
                res += nums[temp];

            else
                res += to_string(temp);

            res += " Hundred ";
            num %= 100;
        }
        else
        {
            temp = num / 10;
            int temp2 = num % 10;
            if (temp * 10 + temp2 >= 0 && temp * 10 + temp2 <= 9)
                res += nums[temp * 10 + temp2];
            else
            {
                a = char(temp) + '0';
                res += a;
                a = char(temp2) + '0';
                res += a;
            }
            if (temp * 10 + temp2 == 0)
                num %= 10;
            else
                num %= 1;
        }
    }

    cout<<n<<"->"<< res;
}

int main()
{
    numberToWord(107906);

    return 0;
}
