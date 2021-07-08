/*
    Code by : Rohit Patil
    Question: Count the number of words in string;

*/

#include<iostream>
using namespace std;

int countWords(string &s)
{
    if(s==" ")  
    return -1;

    int count=1,i=0;
    while(s[i++]!='\0')
    {
        if(s[i]==' ')
            count++;
    }
    return count;
}

int main()
{
    string str;
    int t;
    cout << "\nEnter test case : ";
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cout << "\nEnter any String : ";
        getline(cin,str);
        cout << "Number of words are : " <<  countWords(str) << endl;
    }
    
    return 0;
}