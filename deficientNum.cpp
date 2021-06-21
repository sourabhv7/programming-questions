#include <iostream>
#include <vector>
using namespace std;
void is_deficient(int num)
{
    int i = 0;
    vector<int> v;
    int ans = 0;
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0){
            v.push_back(i);ans += i;
        }
    }

    cout << "\ndivisors of " << num << " : ";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << ", ";

    cout << "\nSum of Divisors is : " << ans << endl;
    if (ans < num)
        cout << "So " << num << " is deficient number";
    else if(ans>num)
        cout << "So " << num << " is Abundant number";
    else
        cout << "So " << num << " is not a deficient number";
}
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    is_deficient(num);
    return 0;
}