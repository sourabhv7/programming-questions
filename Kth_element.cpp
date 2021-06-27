#include<iostream>
using namespace std;
#include<algorithm>

void kthlargest_smallest(int a[],int n,int k)
{
    int i,j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            swap(a[i],a[j]);
        }
    }

    cout << a[k-1] << " " << a[n-k];
}

int main()
{
    int a[10],k;
    cout << "Enter the kth value : ";
    cin >> k;
    for (size_t i = 0; i < 10; i++)
        cin >> a[i];

    kthlargest_smallest(a,10,k);
    return 0;
}