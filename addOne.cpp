/*
    Code by : Rohit Patil
    
    Question : write a program where a function "addOne"  take vector and also return vector 
                like vector<int> addOne(vector<int> v){
                    // code....
                    return vector<int>
                } 

                your task is simply add 1 to vector and return the vector
                ex. vector  v = {1,2,3,4};
                    output - {1,2,3,4}+1 = {1,2,3,5};

                    explain 1,2,3,4 = 1234,
                    after add one = 1234+1; 1235
                    return {1,2,3,5};

                    ex2. v={9,9,9};
                     return 999+1 = {1,0,0,0};
*/

#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

vector<int> addOne(vector<int> v)
{
    int carry=0,ind=1;
    reverse(v.begin(),v.end());

    v[0]+=1;
    carry=v[0]/10;
    v[0]=v[0]%10;

    while(ind<v.size())
    {
        v[ind]+=carry;
        carry=v[ind]/10;
        v[ind]=v[ind]%10;
        ind++;
    }

    if(carry)
        v.push_back(carry);
    return v;
}

void printVector(vector<int> v2)
{
    reverse(v2.begin(),v2.end());
    cout << "Result : ";
    for(auto it:v2)
    {
        cout << it << " ";
    }
    cout << "\n";
}
int main()
{
    vector<int> v,v2;
    int size,ele,t;
    cout << "\nEnter the number of test case : ";
    cin >> t;

    while(t--)
    {
        cout << "\nEnter the size of vector : "; cin >> size;
        cout << "Enter all elements : ";
        for(int i=0; i<size; i++)
        {
            cin >> ele;
            v.push_back(ele);
        }

        v=addOne(v);
        printVector(v);
        v.clear();
    }

    return 0;
}