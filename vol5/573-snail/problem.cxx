#include <iostream>

using namespace std;

int main()
{
	double h, u, d, f;
	while (cin >> h >> u >> d >> f)
	{
		if (h == 0) break;
		double u_temp = u;
		double fatigue = u * (f / 100);
		double snail_pos = 0;
		int days = 0;
	
		while (1)
		{
			days++;
			snail_pos += u_temp;
			if (snail_pos > h)
			{
				cout << "success on day " << days << endl;
				break;
			}		
			snail_pos -= d;
			
			if (snail_pos < 0)
			{
				cout << "failure on day " << days << endl;
				break;
			}
			u_temp -= fatigue;
			if (u_temp < 0)
				u_temp = 0;
		}
	}
	return 0;
}
