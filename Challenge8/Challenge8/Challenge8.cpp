#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	long long int data[13], total = 1, max = 0, j = 0, k = 0;
	string input;
	fstream infile;

	do
	{
		cout << "Enter file name: ";
		cin >> input;
		infile.open(input);

	}while(!infile.is_open());

	for (int i = 0; i < 13; i++)
	{
		data[i] = infile.get() - 48;
		total = data[i] * total;
	}

	max = total;
	total = 1;

	while (k < 999)
	{
		if (j == 13)
		{
			j = 0;
		}

		data[j] = infile.get() - 48;

		for (int p = 0; p < 13; p++)
		{
			total = data[p] * total;
		}

		if (total > max)
		{
			max = total;
		}

		j++;
		k++;
		total = 1;
	}

	cout << "The max 13 adjacent digits is: " << max << endl;

	infile.close();
    return 0;
}

