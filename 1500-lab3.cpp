
#include <iostream>
#include <string>
using namespace std;
int main()
{


    bool A[8] = { 0, 0, 0, 0, 1, 1, 1, 1 };
    bool B[8] = { 0, 0, 1, 1, 0, 0, 1, 1 };
    bool C[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
    int i = 0;

    cout << "Welcome to Truth Table, Lab 3" << endl;


    for (int i = 0; i < 8; i++)
    {

        cout << "\n(A nor C) xor B: " << (!(A[i] || C[i]) ^ B[i]) << endl;

        cout << "(B implies C) nand (A nor B): " << !(!(B[i] && !C[i]) && !(A[i] || B[i])) << endl;

        cout << "(A xor B) implies (B xnor C): " << !((A[i] ^ B[i]) && !(!(B[i] ^ C[i]))) << endl;

        cout << "(A implies B) implies !C: " << (!(!(A[i] && !B[i]) && C[i])) << endl;
    }

    cout << "\nEnd of Truth Table" << endl;
}
