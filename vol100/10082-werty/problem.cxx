#include <iostream>
#include <map>

using namespace std;

int main()
{
	string s = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./ ";
	string r = "234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./` ";
	map<char,char> m;
	for (int i = 0; i < r.length(); i++)
		m[r[i]] = s[i];

	string input;
	while (getline(cin,input))
	{
		for (int i = 0; i < input.length(); i++)
			if (input[i] != 'Q' && input[i] != 'A' && input[i] != 'Z')
				cout << m[input[i]];
		cout << endl;
	}

	return 0;
}
