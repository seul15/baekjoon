#include<iostream>
using namespace std;

int main()
{
	int N, M,sum;
	cin >> N >> M;

	sum = (N - 1) + (M - 1) * N;

	cout << sum << '\n';

	return 0;
}
