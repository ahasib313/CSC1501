#include<iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//==========================================
//baseConversion
//==========================================

void baseConversion(int n, int b)
{
    if (n == 0)
        return;

    int mod = n % b;
    n /= b;
    if (mod < 0)
    {
        n = n + 1;
    }
    baseConversion(n, b);
    if (mod < 0)
    {
        cout << mod + (b * -1);
    }
    else
    {
        cout << mod;
    }
    return;
}

//==========================================
//MAIN
//==========================================

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int n;
        int b;
        cout << "\n\nBase Conversion" << endl;
        cout << "Input decimal number: ";
        cin >> n;
        cout << "Input numerical base: ";
        cin >> b;
        baseConversion(n, b);
    }
    cout << endl;
}