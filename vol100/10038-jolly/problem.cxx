#include <iostream>
#include <cmath>
#include <set>

using namespace std;

int main()
{
	int a = 0;
	while (cin >> a)
	{
		int numbers[a+1];
		set<int> results;

		for (int i = 0; i < a; i++)
			cin >> numbers[i];
		
		for (int i = 0; i + 1 < a; i++)
		{
			int diff = abs(numbers[i] - numbers[i+1]);
			if (diff >= 1 && diff < a)
				results.insert(diff);
		}
		
		cout << ((results.size() == a - 1) ? "Jolly" : "Not jolly") << endl;
	}

	return 0;
}
