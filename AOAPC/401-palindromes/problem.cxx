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
	for (int i = 0; i < s.length() / 2 + s.length() % 2; i++)
		if (s[s.length() - 1 - i] != rev[s[i]])
			return false;
	return true;
}

int main()
{
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	string rever = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
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
