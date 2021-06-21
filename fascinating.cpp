#include <iostream>
#include <map>
using namespace std;

void fascnatingNum(int num)
{
    int i = 0;
    int temp1, temp2;
    temp1 = num * 2;
    temp2 = num * 3;
    string res = "";
    res += to_string(num);
    res += to_string(temp1);
    res += to_string(temp2);

    int finder[10] = {0};
    for (i = 0; i < res.length(); i++)
        finder[res[i] - '0']++;

    for (i = 1; i < 10; i++)
    {
        if (finder[i] > 1 || finder[i] == 0)
            return;
    }
    cout << num << " is a facsinating number" << endl;
}

int main()
{
    int i = 0, start, end;
    cout << "Set the range for printing facsinating number " << endl;
    cout << "Start point : ";
    cin >> start;
    cout << "End point : ";
    cin >> end;

    if (start < 100)
        start = 192;
    if (end > 327 && end < 1901)
        end = 327;

    for (i = start; i <= end; i++)
        fascnatingNum(i);

    return 0;
}
