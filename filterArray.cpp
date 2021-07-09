#include <iostream>
#include <vector>
#include <map>
using namespace std;
void fillArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}
void removeDuplicate(vector<int> arr)
{
    vector<int> v;
    map<int, int> m;
    map<int, int>::iterator it;
    for (int i = 0; i < arr.size(); i++)
        m[arr[i]]++;
    for (it = m.begin(); it != m.end(); it++)
        v.push_back(it->first);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
void filterArray(int *arr, int n, int len)
{
    vector<int> v;
    int i = 0;
    for (i = 0; i < len; i++)
        if (arr[i] % 2 == 0)
            v.push_back(arr[i]);
    removeDuplicate(v);
}
int main()
{
    int n;
    cout << "enter the size of arr : ";
    cin >> n;
    int arr[n];
    fillArray(arr, n);
    filterArray(arr, 2, 7);
    return 0;
}