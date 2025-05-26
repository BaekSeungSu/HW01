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

void sort_arr(int* arr, int size, int order)
{

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

	cout << sum << '\n' << avg << '\n';


	cout << make_sum(arr, 5) << '\n' << make_avg(arr, 5);

}

