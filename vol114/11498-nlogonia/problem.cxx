#include <iostream>

using namespace std;

int main()
{
	int a = -1, b, c, d, e;
	while (a != 0)
	{
		cin >> a;
		cin >> b >> c;
		for (int i = 0; i < a; i++)
		{
			cin >> d >> e;
			if ((d == b) || (c == e)) cout << "divisa" << endl;
			else if ((d > b) && (e > c)) cout << "NE" << endl;
			else if ((d < b) && (e > c)) cout << "NO" << endl;
			else if ((d > b) && (e < c)) cout << "SE" << endl;
			else if ((d < b) && (e < c)) cout << "SO" << endl;
		}
	}
	return 0;
}
