#include <iostream>
#include <iomanip>
using namespace std;

//===========================================
//Counting actions
//===========================================

int actionsCount(int* a)
{
    int i;
    int j;
    int temp;
    int actions = 0;
    for (i = 0; i < 10; i++) 
    {
        for (j = i + 1; j < 10; j++)
        {
            actions = actions + 1;
            if (a[j] < a[i]) 
            {
                actions = actions + 3;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return actions;
}

//===========================================
//Printing the Sorted List
//===========================================

void printArray(int a[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}

//===========================================
//MAIN
//===========================================

int main()
{
    int  actions = 0;
    int a[10] = { 1, 3, 7, 5, 2, 4, 6, 8, 9, 10 };
    int b[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int c[10] = { 1, 10, 2, 9, 3, 8, 4, 7, 5, 6 };
    actions = actionsCount(a);
    cout << "\nSorted List 1: ";
    printArray(a);
    cout << "\nActions Performed: " << actions << endl;
    actions = actionsCount(b);
    cout << "\nSorted List 2: ";
    printArray(b);
    cout << "\nActions Performed: " << actions << endl;
    actions = actionsCount(c);
    cout << "\nSorted List 3: ";
    printArray(c);
    cout << "\nActions Performed: " << actions << endl;
}