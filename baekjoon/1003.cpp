#include<iostream>
using namespace std;


int main()
{
	int T;
	cin >> T;
	int a[2][41] = {0};
	a[0][0] = { 1 }, a[1][0] = { 0 }, a[0][1] = { 0 }, a[1][1] = { 1 };
	for (int j = 2; j <=40; j++)
	{
		a[0][j] = a[0][j - 1] + a[0][j - 2];
		a[1][j] = a[1][j - 1] + a[1][j - 2];
	}
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		cout << a[0][N] << " " << a[1][N] << '\n';
	}
	return 0;
}