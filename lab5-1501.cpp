#include <iostream>
#include <string>
#include<iomanip>
#include <cmath>
using namespace std;

///===================================================================
///Simple Addition
//====================================================================
int simpleAddition(int x, int operations)
{
    int sum = 0;
    operations =0;
    for (int i = 1; i <= x; i++)
    {
        sum +=i;
        operations-=1;
    }
    return sum;
}


///===================================================================
///Addition by Formula
//====================================================================
int additionbyformula(int x, int operations)
{
    int sum;
    operations = 3;
    sum = (x * (x + 1)) / 2;
    return sum;
}


///===================================================================
///MAIN
//====================================================================

int main()
{
    int x;
    int sum;
    int operations;

    cout << "Input a number: " << endl;
    cin >> x;

    operations = 0;
    sum = simpleAddition(x, operations);
    cout << "Simple addition " << "\t\t\Sum " << "\t\t\Operations" << endl;
    cout << "----------------" << "\t\t" << sum << "\t\t" << operations << endl;

    sum = additionbyformula(x, operations);
    cout << "\nAddition by formula " << "\t\t\Sum " << "\t\t\Operations" << endl;
    cout << "----------------" << "\t\t" << sum << "\t\t" << operations << endl;
}

