#include <iostream>
#include <map>
using namespace std;
void fillArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void duplicate(int *arr, int n)
{
    int i = 0;
    map<int, int> m;
    map<int, int>::iterator it;
    for (i = 0; i < n; i++)
        m[arr[i]]++;
    for (it = m.begin(); it != m.end(); it++)
        if (it->second > 1)
            cout << it->first << "-> " << it->second << endl;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Fill array element" << endl;
    fillArray(arr, n);
    cout << "numbers which accured more then one times are :\n";
    duplicate(arr, n);
    return 0;
}