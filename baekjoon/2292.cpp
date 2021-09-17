#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int answer = 0,a=1; 
	for (int i = 0; i<N; i++)
	{
		a += 6 * i;
		if (N >a)
		{
			answer += 1;
		}
		else
		{
			answer += 1;
			break;
		}
	}
	cout << answer;
	return 0;
}