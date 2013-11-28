#include <iostream>
#include <map>
#include <cstdlib>

using namespace std;

int roman_to_arabic(string s)
{
	map<char,int> roman;
	roman['M'] = 1000;
	roman['D'] = 500;
	roman['C'] = 100;
	roman['L'] = 50;
	roman['X'] = 10;
	roman['V'] = 5;
	roman['I'] = 1;
	
	int res = 0;
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (roman[s[i]] < roman[s[i+1]])
			res -= roman[s[i]];
		else
			res += roman[s[i]];
	}
	res += roman[s[s.length()-1]];
	return res;
}

string arabic_to_roman(int n)
{
	string r = "";
	
	const string roman[13] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	const int decimal[13] =  {1000,  900, 500,  400, 100,   90,  50,   40,  10,   9,    5,    4,   1};
  
	for (int i = 0; i < 13; i++) 
	{
			while (n >= decimal[i]) 
			{
					n -= decimal[i];
					r += roman[i];
			}
	}

	return r;
}

int main()
{
	string s;
	
	while (cin >> s)
	{
		int num = 0;
		bool is_num = false;
		if (isdigit(s[0]))
		{
			num = atoi(s.c_str());
			is_num = true;
		}
		if (is_num)
			cout << arabic_to_roman(num) << endl;
		else
			cout << roman_to_arabic(s) << endl;
	}

	return 0;
}
