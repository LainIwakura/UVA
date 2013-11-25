#include <iostream>

using namespace std;

int main()
{
	int a, b, c, max = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		max = 0;
		cin >> b;
		for (int j = 0; j < b; j++)
		{
			cin >> c;
			max = (c > max) ? c : max;
		}
		cout << "Case " << i+1 << ": " << max << endl;
	}
	return 0;
}
