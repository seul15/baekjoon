#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int C;
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		float N;
		cin >> N;
		float arr[1000] = {0};
		float average, sum=0,a=0;

		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		average = sum / N;
		for (int i = 0; i < N; i++)
		{
			if (arr[i] > average)
			{
				a += 1;
			}
		}
		cout << setprecision(3) << fixed; 
		cout<< a / N * 100 << "%" << '\n';
	}
	return 0;
}