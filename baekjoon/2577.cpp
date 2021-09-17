#include<iostream>
using namespace std;

int main()
{
	int a[10] = {0};
	int A, B, C;
	cin >> A >> B >> C;
	int sum = A * B * C;
	while (sum!=0)
	{
		int num = sum % 10;
		a[num]++;
		sum /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << '\n';
	}
	return 0;
}