#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	int p,s;
	cin >> A >> B >> C;

	if (B > C)
	{
		cout << -1<<'\n';
	}

	for (int i = 1; i < 1000; i++)
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