#include <iostream>
using namespace std;
void timeConvert( string str)
{//"01:22:33AM"
int i=0;
    string h1,m1,s1,formate;
    for(i=0;i<2;i++){
        h1+=str[i];
    }
    for(i=i+1;i<5;i++){
        m1+=str[i];
    }
    for(i=i+1;i<8;i++){
        s1+=str[i];
    }
    for(;i<10;i++){
        formate+=str[i];
    }
    int h,m,s;
    h=stoi(h1);
    m=stoi(m1);
    s=stoi(s1);
    if (h == 12 && (m > 0 || s > 0) && formate == "AM")
    {
        cout << "invalid formate........." << endl;
        return;
    }
    cout << "Military Time(after add 45 in minutes and seconds) : ";
    if (formate == "PM")
    {
        if (h > 10 && (m >= 14) && s > 14)
        {
            h = h % 12;
        }
        else
            h = h % 12 + 12;

        s += 45;
        m += 45;
        if (s + 45 >= 60)
        {
            m += (s / 60);
            s %= 60;
        }
        if (m + 45 >= 60)
        {
            h += (m / 60);
            m %= 60;
        }
        if (h == 12 && (m > 0 || s > 0))
            cout << h - 12 << " : " << m << " : " << s  << endl;
        else
            cout << h << " : " << m << " : " << s << endl;
    }

    else if (formate == "AM")
    {
        s += 45;
        m += 45;
        if (s + 45 >= 60)
        {
            m += (s / 60);
            s %= 60;
        }
        if (m + 45 >= 60)
        {
            h += (m / 60);
            m %= 60;
        }
        if (h == 12)
            cout << h << " : " << m << " : " << s << endl;
        else
            cout << h << " : " << m << " : " << s << endl;
    }

}
int main()

{

    cout<<"NOTE-> dont writr time LIke 1:2:3am this Write like 01:02:03AM" <<endl;
    string str;
    cout<<"enter your time :";
    cin>>str;
    timeConvert(str);
    return 0;
}
