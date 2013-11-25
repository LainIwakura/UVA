#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int total = 0;
		cin >> b;
		for (int j = 0; j < b; j++)
		{
			cin >> c >> d >> e;
			total += (c * e);
		}
		cout << total << endl;
	}
	return 0;
}
