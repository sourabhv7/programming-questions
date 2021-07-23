/*
    code by : Rohit Patil
    Question : question of the day
        write a program which arrenge the element in alternative position
        like arrry arr[] = {5,-1,3,-5,2,-10};
        output = -1 5,-5,3,-10,2
        example 2 arr[] = {5,-1,3,-5,2,-10,19,11,18,20,30};
        output = -1 5,-5,3,-10,2,19,11,18,20,30
        
        NOTE : sequence of the element might be changed but, it should be in alternate order
*/
#include <iostream>
using namespace std;

void Rearrange(int arr[], int size)
{
    cout << "Output : ";
    int i = 0, j = size - 1, k = 0;
    while (i < j)
    {
        while (arr[i] >= 0)
            i++;
        while (arr[j] < 0)
            j--;
        if (i < j)
            swap(arr[i++], arr[j--]);
    }
  
    while (i < size)
    {
        swap(arr[k], arr[i]);
        i++;
        k += 2;
    }
    for (i = 0; i < size; i++)
        cout << arr[i] << ' ';
    cout << endl;
}
int main()
{
    int t, size;
    cout << "\nEnter no of test cases : ";
    cin >> t;
    while(t--)
    {
        cout << "\nEnter size : ";
        cin >> size;
        int arr[size];
        cout << "Input  : ";
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        Rearrange(arr, size);
    }

    return 0;
}
