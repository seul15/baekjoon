#include<iostream>
using namespace std;

int main()
{
	int N,five=0,three=0;
	cin >> N;
	for (int i = 0; i < 2000; i++)
	{
		if (N % 3 == 0)
		{
			if (N >= 15)
			{
				five += 3 * (N / 15);
				N = N % 15;
			}
			else
			{
				three += (N / 3);
				break;
			}
		}
		else if (N % 5 == 0)
		{
			five += (N / 5);
			break;
		}
		else if (N < 5)
		{
			five = 0, three = 0;
			break;
		}
		else
		{
			N -= 5;
			five++;
		}
	}

	if (five + three == 0)
	{
		cout << "-1";
	}
	else
		cout << three + five;
}