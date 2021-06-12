#include <iostream>
using namespace std;

int main() {
    int i , j,k;
    int n;
    cin>>n;
    for(i=1;i<=n;i++){
        cout << string(n-i, ' '); 
        for ( j = 1; j <=i;j++)
        {
            cout<<j;
        }
        for ( k = 1; k <= i; k++)
        {
                if (k>=2)
            {
                cout<<char(63+k);
            }
        }cout<<endl;
    }
    return 0;
}
