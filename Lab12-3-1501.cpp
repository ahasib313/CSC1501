#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int input[7] = { 0, 1, 1, 1, 1, 0, 1 };
    int s1;
    int i;
    int s2;
    int s4;
    int s;
    s1 = (input[0] + input[2] + input[4] + input[6]) % 2;
    s2 = (input[1] + input[2] + input[5] + input[6]) % 2;
    s4 = (input[3] + input[4] + input[5] + input[6]) % 2;

    s = (s1 * 1) + (s2 * 2) + (s4 * 4);
    if (s == 0)
    {
        cout << "\nNo error." << endl;
    }
    else
    {
        cout << "\nLocation of the Error: " << 7 - s + 1;

        cout << "\nCorrect message is: ";

        if (input[7 - s] == 0)

            input[7 - s] = 1;

        else
            input[7 - s] = 0;

        for (i = 0; i < 7; i++)

            cout << input[i];
    }

    int msg[4];

    int dec = 0;

    int b = 1;

    msg[0] = input[6];

    msg[1] = input[5];

    msg[2] = input[4];

    msg[3] = input[2];

    for (i = 0; i < 4; i++)
    {
        dec += msg[i] * b;
        b = b * 2;
    }
    cout << "\nDecimal conversion of message: " << dec << endl << endl;
}