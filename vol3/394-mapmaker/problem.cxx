#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

struct array_info
{
	string name;
	int base;
	int dim;
	vector<pair<int, int> > p;
	int ele_size;
};

int main()
{
	int a, b;
	vector<array_info> arrs;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		array_info temp;
		cin >> temp.name >> temp.base >> temp.ele_size >> temp.dim;
		for (int j = 0; j < temp.dim; j++)
		{
			int m, n;
			cin >> m >> n;
			temp.p.push_back(make_pair(m,n));
		}
		arrs.push_back(temp);
	}

	for (int j = 0; j < b; j++)
	{
		string arr_name;
		cin >> arr_name;
		vector<array_info>::iterator it;
		for (it = arrs.begin(); it != arrs.end(); it++)
			if (it->name == arr_name)
				break;

		int dim = it->p.size(), size = it->ele_size, ans = it->base;		
		int idx;

		cout << it->name << "[";
		
		for (int i = 0; i < dim; i++)
		{
			int references = 1;
			cin >> idx;
			cout << idx << ((i == dim - 1) ? "" : ", ");
			for (int j = i + 1; j < dim; j++)
				references *= (it->p[j].second - it->p[j].first + 1);
			ans += (idx - it->p[i].first) * references * size;
		}
		cout << "] = " << ans << endl;
	}
	
	return 0;
}
