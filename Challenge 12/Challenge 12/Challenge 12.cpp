#include <iostream>

using namespace std;

int main()
{
	int j = 2, k = 0, w = 1;
	unsigned long long int sum = 0;
	bool done = false;

	for (int i = 1; i < j; i++)
	{
		sum = sum + i;
   		j++;
		w = 1;

		while (!done)
		{

			if ((sum % w) == 0)
			{
				k++;
			}
			if (w > sqrt(sum))
			{
				k = 0;
				done = true;
			}
			if (k == 251)
			{
				cout << sum << endl;
				done = true;
				i = j;
			}
			w++;
		}
		cout << sum << endl;
		done = false;
	}

    return 0;
}

