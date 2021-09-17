#include<iostream>
#include<algorithm>
using namespace std;


void search(const int a[], int N, int K)
{
	long long pl = 1;
	long long pr = a[K-1];
	long long pc=(pl + pr) / 2;
	do{
		long long len = 0;
		for (int i = 0; i < K; i++)
		{
			len += a[i] / pc;
		}
		if (len >= N)
			pl = pc + 1;
		else
			pr = pc - 1;		
		pc = (pl + pr) / 2;
	}while (pl <= pr);
	cout << pc << '\n';
}

int main()
{
	int K=0, N=0;
	cin >> K >> N;
	int* num = new int[K];

	for (int i = 0; i < K; i++){cin >> num[i];}
	sort(num, num+K);
	search(num, N, K);

	return 0;
}