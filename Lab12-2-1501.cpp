#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

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
int main()
{
    //#2

    int n;
    int b;
    cout << "\n\nProblem 2--Base Conversion" << endl;
    cout << "Input decimal number: ";
    cin >> n;
    cout << "Input numerical base: ";
    cin >> b;
    baseConversion(n, b);
}

