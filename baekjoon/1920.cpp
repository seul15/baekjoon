#include<iostream>
#include<algorithm>
using namespace std;

int search(int num1[], int N, int key)
{
	int pl = 0;
	int pr = N - 1;
	int pc;
	do{
		pc = (pl + pr) / 2;
		if (num1[pc] == key)
		{
			return 1;
		}
		else if (num1[pc] < key)
		{
			pl = pc + 1;
		}
		else
		{
			pr = pc - 1;
		}
	} while (pr - pl >= 0);
	return 0;
}

int main()
{
	int N, M;
	cin >> N;
	int* num1 = new int[N];
	for (int i = 0; i < N; i++) cin >> num1[i];

	cin >> M;
	int* num2 = new int[M];
	for (int i = 0; i < M; i++) cin >> num2[i];

	sort(num1, num1+N);
	
	for (int j = 0; j < M; j++)
	{
		int key = num2[j];

		cout<<search(num1, N, key);
		cout << '\n';
	}

	return 0;
}