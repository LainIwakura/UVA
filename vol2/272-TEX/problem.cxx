#include <iostream>

using namespace std;

int main()
{
	string s;
	string r;
	bool inner = false;
	while (getline(cin,s))
	{
		r = "";
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '"' && !inner)
			{
				r+= "``";
				inner = true;
				continue;
			}
			else if (s[i] == '"' && inner)
			{
				r += "''";
				inner = false;
				continue;
			}
			r += s[i];
		}
		cout << r << endl;
	}

	return 0;
}
