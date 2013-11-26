#include <iostream>

using namespace std;

int main()
{
	long p, b, h, w;
	
	while (cin >> p >> b >> h >> w)
	{
		long pr, a, total = 20000000;
		for (int i = 0; i < h; i++)
		{
			cin >> pr;
			for (int j = 0; j < w; j++)
			{
				cin >> a;
				if (a >= p)
				{
					long tempTotal = p * pr;
					if (tempTotal <= b && tempTotal < total)
						total = tempTotal;
				}
			}
		}
		
		if (total == 20000000)
			cout << "stay home" << endl;
		else
			cout << total << endl;
	}

	return 0;
}
