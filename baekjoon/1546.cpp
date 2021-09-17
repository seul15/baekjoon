#include<iostream>
using namespace std;

int main()
{
	float N,max,sum=0;
	float test[1000];
	cin >> N;
	cin >> test[0];
	max = test[0];
	for (int i = 1; i < N; i++)
	{
		cin >> test[i];
		if (test[i] > max)
		{
			max = test[i];
		}
	}
	for (int i = 0; i < N; i++)
	{
		sum += (test[i] / max * 100);
	}
	cout << sum / N << '\n';
	return 0;
}