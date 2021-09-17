#include<iostream>
using namespace std;

int main()
{
    int member[5];
    int L, P;
    cin >> L >> P;
    for (int i = 0; i < 5; i++)
    {
        cin >> member[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << member[i] - L * P;
    }

    return 0;
}