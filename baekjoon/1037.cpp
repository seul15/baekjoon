#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int num,N;
	cin >> num;

	int* number = new int[num];
	for (int i = 0; i < num; i++)
		cin >> number[i];

	sort(number, number + num);

	if (num % 2 == 0)
		N = number[num / 2] * number[(num / 2) - 1];
	else
		N = number[num / 2] * number[num / 2];

	cout << N << '\n';

	return 0;
}