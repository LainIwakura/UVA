#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	
	while (cases--)
	{
		long long n;
		cin >> n;
		n *= 567;
		n /= 9;
		n += 7492;
		n *= 235;
		n /= 47;
		n -= 498;
		cout << abs((n % 100) / 10) << endl;	
	}

	return 0;
}
