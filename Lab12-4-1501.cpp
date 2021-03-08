#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    cout << "\nProblem 4-- ((A Union B) Intersect C): ";
    int A[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    int B[6] = { 1, 2, 3, 5, 8, 13 };
    int C[10] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int D[9] = { 1, 2, 3, 5, 7, 11, 13, 17, 19 };
    int M[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int G[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int temp;
    int o = 0;
    for (int i = 0; i < 20; i++)
    {

        for (int i = 0; i < 6; i++)
        {
            M[i] = B[i];
            o++;
        }
        for (int i = 0; i < 10; i++)
        {
            int x = 0;
            for (int j = 0; j < o; j++)
            {
                if (C[i] == M[j])
                {
                    x = 1;
                }
            }
            if (x == 0)
            {
                M[o] = C[i];
                o++;
            }
        }
        for (int j = 0; j < 9; j++)
        {
            if (D[i] == M[j])
            {
                M[j] = 0;
                G[j] = D[i];
                o++;
            }
        }
    }
    for (int i = 0; i < 20; i++)
    {
        cout << M[i] << " ";
    }
}