// Code By Sourabh Verma
/* Print all the subarray of given array 
 Ex. Arr {1,2,3}
 1
 1 2
 1 2 3
 2
 2 3
 3
*/
#include<iostream>
using namespace std;
int main()
{
    short n ,i, j;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n] = {};
    cout<<"Enter "<<n<<" array elements: ";
    for(int t = 0; t<n;t++) cin>>arr[t];
    cout<<"Subarray of the given array :"<<endl;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            for (int k = j; k <= i; k++) cout<<arr[k];
            cout<<endl;    
        }      
    }   
    return 0;
}