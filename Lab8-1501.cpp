#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int B[6] = { 2, 4, 6, 8, 10 };
	int C[6] = { 1, 3, 5, 7, 9 };
	int D[6] = { 1, 3, 5, 7, 2 };
	int L[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int M[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int G[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int temp;
	int o = 0;


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (A[i] == D[j])
			{
				temp = A[i];
				A[i] = L[j];
				L[j] = temp;
			}
		}
	}
	//#1
	cout << "Problem 1-- A  intersect D: ";
	for (int i = 0; i < 5; i++)
	{
		cout << L[i] << " ";
	}

	//#2
	cout << "\nProblem 2-- ( B union C ) intersect A: ";
	for (int i = 0; i < 6; i++)
	{
		L[i] = B[i];
		o++;
	}
	for (int i = 0; i < 5; i++)
	{
		int x = 0;
		for (int j = 0; j < o; j++)
		{
			if (C[i] == L[j])
			{
				x = 1;
			}
		}
		if (x == 0)
		{
			L[o] = C[i];
			o++;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << L[i] << " ";
	}

	cout << "\nProblem 4--A subtract D: ";
	for (int i = 0; i < 10; i++)
	{
		if (A[i] == D[i])
		{
			G[i] = 0;
		}
		else {
			G[i] = A[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << G[i] << " ";
	}
	
}