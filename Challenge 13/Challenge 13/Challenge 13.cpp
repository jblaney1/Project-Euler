#include <iostream>
#include <fstream>

using namespace std;


int main()
{
	int sum[60] = { 0 }, num, num1 = 0, num2 = 0, j = 0;
	char test;
	bool done = false;
	ifstream infile;

	infile.open("data.txt");

	for(int k = 0; k < 100; k++)
	{
		for (int i = 0; i < 50; i++)
		{
			num1 = infile.get() - 48;

			j = i - 1;

			if ((sum[10 + i] + num1) <= 9)
			{
				sum[10 + i] = sum[10 + i] + num1;
			}
			else
			{
				num2 = (sum[10 + i] + num1) % 10;
				
				while (!done)
				{
					if (sum[10 + j] == 9)
					{
						sum[10 + j] = 0;
						j = j - 1;
					}
					else
					{
						sum[10 + j] = sum[10 + j] + 1;
						done = true;
					}
				}

				sum[10 + i] = num2;
				done = false;
			}

		}

		num1 = infile.get();

	}

	for (int m = 0; m < 60; m++)
	{
		cout << sum[m];
	}

    return 0;
}

