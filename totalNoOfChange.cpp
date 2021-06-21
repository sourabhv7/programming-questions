#include <iostream>
using namespace std;
void countNote(int money)
{
    int remaining = 0;
    int thousend = 0;
    int fiveH = 0;
    int hundred = 0;
    int fifty = 0;
    int ten = 0;
    int temp = 0;
    while (money >= 1)
    {
        if (money >= 1000){
            cout << "1000 --> " << money / 1000 << endl;
            temp = 1000;
        }
        else if (money >= 500){
            cout << "500 --> " << money / 500 << endl;
            temp = 500;
        }
        else if (money >= 100){
            cout << "100 --> " << money / 100 << endl;
            temp = 100;
        }
        else if (money >= 50){
            cout << "50 --> " << money / 50 << endl;
            temp = 50;
        }
        else if (money >= 10){
            cout << "10 --> " << money / 10 << endl;
            temp = 10;
        }
        else if (money >= 5){
            cout << "5 --> " << money / 5 << endl;
            temp = 5;
        }
        else if (money >= 1){
            cout << "1 --> " << money / 1 << endl;
            temp = 1;
        }
        money %= temp;
    }
}
int main()
{
    countNote(37478);
    return 0;
}