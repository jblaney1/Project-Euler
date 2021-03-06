#include<iostream>
#include<ppl.h>                  // necissary statement to enable the parallelism of this program
#include<windows.h>              // necissary statement to enable the parallelism of this program

using namespace std;
using namespace concurrency;     // necissary statement to enable the parallelism of this program

bool prime(int x);

int main()
{
	size_t num = 1;
	int i = 1, k = 1;

	//The following statement tells the program how to use the cores and how many cores to use while processing
	//num is the variable that handles how many cores the program has access to

		parallel_for(size_t(0), num, [&](size_t j)
		{
			while (i <= 10002)
			{
				if (prime(k))
				{
					cout << "The " << i << " prime number is: " << k << endl;
					i++;
				}

				k++;
		}   });

		cout << "The " << i << " prime number is: " << k << endl;

    return 0;
}

bool prime(int x)
{
	bool prime = true;

	long long int num = (sqrt(x)); 
	
	for (int i = 2; i <= num; i++)
	{
		if ((x % i) < 1)
		{
			prime = false;
			break;
		}
	}

	return prime;
}