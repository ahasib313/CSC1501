
#include <iostream>
#include <string>
using namespace std;
int main()
{


    bool A[8] = { 0, 0, 0, 0, 1, 1, 1, 1 };
    bool B[8] = { 0, 0, 1, 1, 0, 0, 1, 1 };
    bool C[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
    int i = 0;

    cout << "Welcome to Truth Table" << endl;


    for (int i = 0; i < 8; i++)
    {

        cout << "\n((A && B) || (A && C)): " << ((A[i] && B[i]) || (A[i] && C[i])) << endl;

        cout << "((A && C) && (B && !C)): " << ((A[i] && C[i]) && (B[i] && !C[i])) << endl;


        cout << "((A || B) && !(B || C)): " << ((A[i] || B[i]) && !(B[i] || C[i])) << endl;


        cout << "((A || (B && C)) && (!A && !B)): " << ((A[i] || (B[i] && C[i])) && (!A[i] && !B[i])) << endl;


        cout << "(((B && C) || (C && A)) && (!(A || B) && C)): " <<
            (((B[i] && C[i]) || (C[i] && A[i])) && (!(A[i] || B[i]) && C[i])) << endl;
    }

    cout << "\nEnd of Truth Table" << endl;
}
