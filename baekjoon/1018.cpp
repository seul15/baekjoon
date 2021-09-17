#include<iostream>
using namespace std;

int main()
{
	int ans=0;
	int M, N;
	cin >> M >> N;
	char arr[50][50];

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < M - 7; i++)
	{
		for (int j = 0; j < N - 7; j++)
		{

			int count = 0;
			for (int k = i; k < i + 8; k++)
			{
				for (int l = j; l < j + 8; l++)
				{
					if ((i + j) % 2 == (k + l) % 2)
					{
						if (arr[i][j] != arr[k][l])
							count++;
					}
					else
					{
						if (arr[i][j] == arr[k][l])
							count++;
					}
				}
			}
			if (count > 32)
				count = 64-count;

			if (i == 0 && j == 0)
				ans = count;
			else if(ans > count)
			{
				ans = count;
			}
		}
	}

	cout << ans << '\n';
	return 0;
}