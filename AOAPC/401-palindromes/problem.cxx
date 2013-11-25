#include <map>
#include <iostream>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

typedef map<char, char> Reversals;

bool is_palindrome(string& s)
{
	string r = s;
	reverse(s.begin(), s.end());
	return (s.compare(r) == 0) ? true : false;
}

bool is_mirror(Reversals& rev, string s)
{
	bool ret = true;
	
	for (int i = 0, j = s.length() - 1;; i++, j--)
	{
		if (i > j) break;
		char a = s.at(i);
		char b = s.at(j);
		map<char,char>::iterator it = rev.find(a);
		if (it->second == b)
			continue;
		else
			ret = false;
	}

	return ret;
}

int main()
{
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	string rever = "A   3  HIL JM O   2TUVWXY51SE Z  8 O";
	bool is_pal, is_mir;
	Reversals rev;
	string s;
	
	for (int i = 0; i < alpha.length(); i++)
		rev[alpha[i]] = rever[i];
	
	while (cin >> s)
	{
		is_pal = is_palindrome(s);
		reverse(s.begin(), s.end());
		is_mir = is_mirror(rev, s);

		if (!is_pal && !is_mir)
			cout << s << " -- is not a palindrome." << endl;
		else if (is_pal && !is_mir)
			cout << s << " -- is a regular palindrome." << endl;
		else if (is_mir && !is_pal)
			cout << s << " -- is a mirrored string." << endl;
		else
			cout << s << " -- is a mirrored palindrome." << endl;
		cout << endl;
	}

	return 0;
}
