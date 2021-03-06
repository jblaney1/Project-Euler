#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	bool done = false;

	int data[20][20], product = 0, k = 0, sum = 0;

	ifstream infile;

	infile.open("data.txt");

	while (!done)
	{
		for (int i = 0; i < 20; i++)
		{
			infile >> data[i][k];
		}

		if (k == 19)
		{
			done = true;
		}

		k++;
	}

	k = 0;
	done = false;

	while (!done)
	{
		for (int i = 0; i < 20; i++)
		{
			sum = data[i][k] * data[i][k + 1] * data[i][k + 2] * data[i][k + 3];

			if (product < sum)
			{
				product = sum;
			}
		}
		
		if (k == 16)
		{
			done = true;
		}

		k++;
	}

	k = 0;
	done = false;

	while (!done)
	{
		for (int i = 0; i < 20; i++)
		{
			sum = data[k][i] * data[k + 1][i] * data[k + 2][i] * data[k + 3][i];

			if (product < sum)
			{
				product = sum;
			}
		}

		if (k == 16)
		{
			done = true;
		}

		k++;
	}

	k = 0;
	done = false;

	while (!done)
	{
		for (int i = 0; i < 16; i++)
		{
			sum = data[i][k] * data[i + 1][k + 1] * data[i + 2][k + 2] * data[i + 3][k + 3];

			if (product < sum)
			{
				product = sum;
			}
		}

		if (k == 16)
		{
			done = true;
		}

		k++;
	}

	k = 0;
	done = false;

	while (!done)
	{
		for (int i = 0; i < 16; i++)
		{
			sum = data[19 - i][k] * data[ 18 - i][k + 1] * data[17 - i][k + 2] * data[16 - i][k + 3];

			if (product < sum)
			{
				product = sum;
			}
		}

		if (k == 16)
		{
			done = true;
		}

		k++;
	}

	cout << product << endl;

    return 0;
}