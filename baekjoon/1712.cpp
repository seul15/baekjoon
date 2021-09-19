#include<iostream>
using namespace std;

int main()
{
	long long A, B, C;
	long long p,s;
	cin >> A >> B >> C;

	if (B >= C)
	{
		cout << -1<<'\n';
	}

	for (long long i = 1; i>0;  i++)
	{
		p = A + B*i;
		s = C * i;
		if (p < s)
		{
			cout << i << '\n';

			break;
		}
	}


	return 0;
}