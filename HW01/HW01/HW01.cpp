#include<bits/stdc++.h>

using namespace std;

int make_sum(int* arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}

int make_avg(int* arr, int size)
{
	int sum = 0, avg;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	avg = sum / size;
	return avg;
}

// 버블정렬
void sort_arr(int* arr, int size, int order)
{
	int tmp;
	if (order == 1)
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = i; j < size - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}
}

int main()
{
	int arr[5];
	int sum = 0, avg;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	avg = sum / 5;

	cout << "sum : " << sum << '\n' << "average : " << avg << '\n';


	cout << "Function called sum and average\n";
	cout << "sum : " << make_sum(arr, 5) << '\n' << "average : " << make_avg(arr, 5) << '\n';

	cout << "Before sorting\n";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';

	cout << "After sorting(ascending)\n";
	sort_arr(arr, 5, 1);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';

	cout << "After sorting(descending)\n";
	sort_arr(arr, 5, 2);
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << '\n';
}

