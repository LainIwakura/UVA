#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		long a, b;
		cin >> a >> b;
		((a+b)%2 || (a-b)%2 || (a < b)) ? printf("impossible\n") : printf("%d %d\n",(a+b)/2,(a-b)/2);
	}
	return 0;
}
