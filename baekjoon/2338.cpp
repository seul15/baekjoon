#include<iostream>
using namespace std;

int main()
{
	int N, K;
	int min = 0;
	cin >> N >> K;
	int *A = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = N-1; i >=0 ; i--)
	{
		if (K / A[i] >= 1)
		{
			min += K / A[i];
			K -= (K / A[i]) * A[i];
		}
	}

	cout << min << endl;

	delete A;
	return 0;
}