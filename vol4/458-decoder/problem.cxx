#include <iostream>

using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		string r;
		for (int i = 0; i < s.length(); i++)
			r += s[i]-7;
		cout << r << endl;
	}
	return 0;
}
