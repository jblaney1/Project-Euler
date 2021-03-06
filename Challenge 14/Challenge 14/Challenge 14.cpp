// Challenge 14.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <chrono>

using namespace std;

int main()
{
	long long int total = 0, count = 1, n = 13, max = 0, countmax = 0;

	auto start = chrono::steady_clock::now();

	while (n < 1000000)
	{
		if (n % 2 == 0)
		{
			n = n + 1;
		}

		total = n;
		
		while (total > 1)
		{
			count++;

			if (total % 2 == 0)
			{
				total = total / 2;
			}
			else
			{
				total = (3 * total) + 1;
			}
		}

		if (countmax <= count)
		{
			max = n;
			countmax = count;
		}

		count = 1;
		n++;
	}

	auto end = chrono::steady_clock::now();

	auto time = end - start;

	cout << "The max Collatz is: " << max << endl;

	cout << "Time taken: " << chrono::duration <double, milli> (time).count() << " ms" << endl;

    return 0;
}