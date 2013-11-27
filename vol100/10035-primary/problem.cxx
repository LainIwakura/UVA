#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
	char digits_i[10], digits_j[10];
	int i[10], j[10];
	
	while (scanf("%s %s", digits_i, digits_j), strcmp(digits_i, "0") || strcmp(digits_j, "0"))
	{
		int num_digits_i = strlen(digits_i);
		int num_digits_j = strlen(digits_j);
		int count = 0;

		for (int m = num_digits_i - 1; m >= 0; m--)
			i[count++] = digits_i[m] - '0';
		
		count = 0;
		
		for (int n = num_digits_j - 1; n >= 0; n--)
			j[count++] = digits_j[n] - '0';
	
		count = 0;

		int ans = 0, c = 0;

		while (count < num_digits_i && count < num_digits_j)
		{
			c = (i[count] + j[count] + c) / 10;
			if (c) ans++;
			count++;
		}

		while (count < num_digits_i)
		{
			c = (i[count] + c) / 10;
			if (c) ans++;
			count++;
		}

		while (count < num_digits_j)
		{
			c = (j[count] + c) / 10;
			if (c) ans++;
			count++;
		}

		if (ans == 0)
			printf("No ");
		else
			printf("%d ", ans);
		printf("carry operation");
		if (ans > 1)
			printf("s");
		printf(".\n");
	}
	return 0;
}
