#include <iostream>

using namespace std;

int sort(int arr[], int size)
{
	int swaps = 0;
	bool flag = true;

	for (int i = 0; (i <= size) && flag; i++)
	{
		flag = 0;
		for (int j = 0; j < (size - 1); j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
				++swaps;
			}
		}
	}
	
	return swaps;
}

int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int size;
		cin >> size;
		int nums[size];
		for (int i = 0; i < size; i++)
			cin >> nums[i];
		int swaps = sort(nums, size);
		cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
	}

	return 0;
}
