#include<iostream>
using namespace std;

int main()
{
	int N,ans=0;
	int a, b;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		if (i > 99)
		{
			int arr[3];
			arr[0] = i / 100;
			arr[1] =( i % 100 - i % 10)/10;
			arr[2] = i % 10;
			a = arr[1] - arr[0];
			b = arr[2] - arr[1];
			if (a == b)
			{
				ans++;
			}
		}
		else
			ans++;
	}

	cout << ans;
}