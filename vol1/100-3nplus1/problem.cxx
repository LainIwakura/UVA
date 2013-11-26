#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long cache[1000000];

long next(long n)
{
	return (n % 2 != 0) ? (3*n)+1 : n / 2;
}

long cycle_length(long n)
{
	if (n == 1) return n;
	
	if (n < 1000000 && cache[n] != 0)
		return cache[n];
	
	long length = 1 + cycle_length(next(n));

	if (n < 1000000)
		cache[n] = length;

	return length;
}

int main()
{
	long i, j;
	long to, from;
	while(cin >> i >> j)
	{
		to = max(i,j);
		from = min(i,j);

		long m = 0;
		
		for (long n = from; n <= to; n++)
			m = max(m,cycle_length(n));

		cout << i << " " << j << " " << m << endl;
	}

	return 0;
}
