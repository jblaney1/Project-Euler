// Challenge 9.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;


int main()
{
	int a = 1, b = 1, c = 0, d = 0;
	double e = 1.0;

	while (a < 1000)
	{
		b = a + 1;
		while (b < 1000)
		{
			e = sqrt((a * a) + (b * b));
			d = e;
			if (d / e == 1.0)
			{
				c = d;
				if ((a + b + c) == 1000)
				{
					cout << "A = " << a << endl;
					cout << "B = " << b << endl;
					cout << "C = "<< c << endl;
					cout << "Total = "<< a + b + c << endl;
					cout << "Product = " << a * b * c << endl;
				}
			}

			b++;
		}
		a++;
	}

    return 0;
}

