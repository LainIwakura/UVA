#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	int i = 0;
	cin >> a;
	while (i != a)
	{
		cin >> b >> c >> d;
		int max, min, other;
		max = ((b > c) && (b > d)) ? b :
					((c > d) && (c > b)) ? c :
					((d > b) && (d > c)) ? d : 0;
		min = ((b < c) && (b < d)) ? b :
					((c < d) && (c < b)) ? c :
					((d < b) && (d < c)) ? d : 0;
		other = (((b == max) && (c == min)) || ((c == max) && (b == min))) ? d :
						(((c == max) && (d == min)) || ((d == max) && (c == min))) ? b :
						(((d == max) && (b == min)) || ((b == max) && (d == min))) ? c : 0;
		cout << "Case " << i+1 << ": " << other << endl;
		i++;
	}

	return 0;
}
