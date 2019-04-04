#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b, c;
	double p = 2;
	double pRoot = 1 / p;
	int n = 10;
	double dDouble;
	int dInt;
	int count = 0;

	for (a; a < n; a++)
	{
		for (b = a + 1; b < n; b++)
		{
			for (c = b + 1; c < n; c++)
			{
				dDouble = pow(pow(a, p) + pow(b, p) + pow(c, p), pRoot);
				dInt = int(dDouble);

				if (dDouble == dInt)
				{
					cout << "Solution found: a = " << a << ", b = " << b << ", c = " << c << ", d = " << dInt << endl;
					count++;
				}
			}
		}
	}

	cout << endl << "A total of " << count << " solutions were found.";
	getchar();
	return 0;
}