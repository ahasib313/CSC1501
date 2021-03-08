#include <iostream>
#include <string>
using namespace std;

///===================================================================
///Simple Addition
//====================================================================
int simpleAddition(int x, int &operations_add)
{
    
        int sum = 0, i;
        operations_add = 0;

        for (i = 1; i <= x; i++)
        {
            sum = sum + i;

            operations_add += 1;
        }

        operations_add -= 1;
        return sum;
    
    
}


///===================================================================
///Addition by Formula
//====================================================================
int additionbyformula(int x, int &operations)
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
    int answer;
    int operations = 0;
    int operations_add = 0;

    cout << "Input a number: " << endl;
    cin >> x;

    answer = simpleAddition(x, operations_add);
    cout <<  "Simple Addition--Answer: " << answer << "\t\t\t\tOperations: " << operations_add;
    
    answer = additionbyformula(x, operations);
    cout << "\nFormula Addition--Answer: " << answer << "\t\t\t\tOperations: " << operations << endl;
    return 0;
}

