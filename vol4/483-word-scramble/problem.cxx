#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s;
	while (getline(cin,s))
	{
		string res = "";
		string c;
		istringstream ss(s);
		while (ss >> c)
		{
			for (int i = c.length() - 1; i >= 0; i--)
				res += c[i];
			res += " ";
		}
		res.erase(res.length() - 1, 1);
		cout << res << endl;
	}
	
	return 0;
}
