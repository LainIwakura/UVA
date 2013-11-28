#include <map>
#include <iostream>

using namespace std;

string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ-10";
string r = "22233344455566677778889999-10"; 

int main()
{
	map<char,char> m;
	for (int i = 0; i < s.length(); i++)
		m[s[i]] = r[i];

	string j;
	while (cin >> j)
	{
		for (int i = 0; i < j.length(); i++)
			cout << m[j[i]];
		cout << endl;
	}

	return 0;
}
