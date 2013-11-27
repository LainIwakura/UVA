#include <iostream>

using namespace std;

int main()
{
	int cases;
	int runs = 1;
	cin >> cases;
	
	while (cases--)
	{
		string s;
		cin >> s;
		cout << "Case " << runs << ": ";
		++runs;

		for (int i = 0; i < s.length();)
		{
			char c = s[i];
			i++;
			int num = 0;
			while (isdigit(s[i]))
			{
				num = (10 * num) + (s[i]-'0');
				i++;
			}

			for (int j = 0; j < num; j++)
				cout << c;
		}
		cout << endl;
	}

	return 0;
}
