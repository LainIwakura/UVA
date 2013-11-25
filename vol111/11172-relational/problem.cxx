#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	while(a != 0) {
		cin >> b >> c;
		if (b < c) cout << "<" << endl;
		else if (b > c) cout << ">" << endl;
		else if (b == c) cout << "=" << endl;
		--a;
	}

	return 0;
}
