#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    bool U[8] = { 0, 0, 0, 0, 1, 1, 1, 1 };
    bool V[8] = { 0, 0, 1, 1, 0, 0, 1, 1 };
    bool W[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
    cout << "\nProblem 5--Truth Tables" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "\n!(A XOR C) NAND(B OR A): " << !(!(U[i] ^ W[i]) && (U[i] || V[i])) << endl;
    }
}