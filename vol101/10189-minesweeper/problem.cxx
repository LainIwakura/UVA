#include <iostream>

using namespace std;

char field[102][102];
char result[102][102];

int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[] = {1, -1, 0, 1, -1, 1, 0, -1};

int main()
{
	int a, b;
	int field_num = 0;
	
	while(cin >> a >> b, (a != 0 && b != 0))
	{
		if (field_num != 0 ) cout << endl;
		
		++field_num;

		for (int i = 1; i <= a; i++)
			for (int j = 1; j <= b; j++)
			{
				cin >> field[i][j];
				result[i][j] = '0';
			}

		for (int i = 1; i <= a; i++)
			for (int j = 1; j <= b; j++)
				if (field[i][j] == '*')
					for (int k = 0; k < 8; k++)
						result[i+dx[k]][j+dy[k]]++;

		cout << "Field #" << field_num << ":" << endl;
		for (int i = 1; i <= a; i++)
		{
			for (int j = 1; j <= b; j++)
			{
				if (field[i][j] == '*')
					cout << field[i][j];
				else
					cout << result[i][j];
			}
			cout << endl;	
		}
	}

	return 0;
}
