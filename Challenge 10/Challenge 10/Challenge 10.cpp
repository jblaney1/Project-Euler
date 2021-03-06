#include <iostream>
using namespace std;

bool prime(int x);

int main()
{
	int i = 0;
	unsigned long long int k = 0;

	while (i <= 2000000)
	{
		if (prime(i))
		{
			cout << i << " is a prime number" << endl;
			k = k + i;
		}
		i++;
	}

	k = k + 40;

	cout << "The sum of all prime numbers less than 2000000 is " << k << endl;

	return 0;
}

bool prime(int x)
{
	bool prime = true;

	long long int num = (sqrt(x));

	if (x % 2 == 0)
	{
		prime = false;
	}
	else if (x % 3 == 0)
	{
		prime = false;
	}
	else if (x % 5 == 0)
	{
		prime = false;
	}
	else if (x % 7 == 0)
	{
		prime = false;
	}
	else if (x % 11 == 0)
	{
		prime = false;
	}
	else if (x % 13 == 0)
	{
		prime = false;
	}
	else
	{
		for (int i = 2; i <= num; i++)
		{
			if ((x % i) < 1)
			{
				prime = false;
				break;
			}
		}

	}

	return prime;
}