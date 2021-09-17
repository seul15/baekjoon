#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	int a=1;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		arr[i] = arr[i] % 42;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				break;
			}
			if(i-1==j)
			{
				a += 1;
			}
		}
	}
	cout << a << '\n';
	return 0;
}