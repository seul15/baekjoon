#include<iostream>
using namespace std;

int a[10001];


int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N,num;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		a[num]++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (a[i] == 0) continue;
		for (int j = 0; j < a[i]; j++)
			cout << i << '\n';
	}

	return 0;
}