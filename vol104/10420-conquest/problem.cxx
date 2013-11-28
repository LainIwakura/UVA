#include <iostream>
#include <map>
#include <utility>

using namespace std;

typedef map<string, map<string, unsigned int> > mymap;
typedef map<string, map<string, unsigned int> >::iterator mmit;

int main()
{
	int cases;
	cin >> cases;
	mymap m;
	while (cases--)
	{
		string country, woman;
		cin >> country;
		getline(cin, woman);
		m[country].insert(make_pair(woman, 0U)).first->second++;
	}

	for (mmit i = m.begin(); i != m.end(); i++)
		cout << i->first << " " << i->second.size() << endl;

	return 0;
}
