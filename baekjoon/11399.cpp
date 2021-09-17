#include<iostream>
using namespace std;

int main()
{
	int N,a=0,ans=0;
	cin >> N;
	int arr[1000] = {};
	for (int i = 0; i < N; i++)
	{
		cin>>arr[i];
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <N; j++)
		{
			if (arr[i] < arr[j])
			{
				a = arr[j];
				arr[j] = arr[i];
				arr[i]=a;
			}
		}
	}


	for (int i = 0; i < N; i++)
	{
		ans += (N-i) * arr[i];
	}

	cout << ans << '\n';

	return 0;
}