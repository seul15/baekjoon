#include<iostream>
using namespace std;

void set(int *count, int i,int N,int *flag_a[],int *flag_b[],int *flag_c[])
{
	int j;
	for (j = 0; j < N; j++)
	{
		if (!flag_a[j] && !flag_b[i + j] && !flag_c[i - j + N - 1])
		{
			if (i == N - 1)
				*count+=1;
			else
			{
				flag_a[j] = flag_b[i + j] = flag_c[i - j + N - 1] = 1;
				set(count,i + 1,N,flag_a,flag_b,flag_c);
				flag_a[i] = flag_b[i + j] = flag_c[i - j + N - 1] = 0;
			}
		}
	}
}

int main()
{
	int N;
	cin >> N;
	int *flag_a = new int[N];
	int* flag_b = new int[2*N-1];
	int* flag_c = new int[2*N-1];

	int i,count=0;
	for (i = 0; i < N; i++)
		flag_a[i] = 0;
	for (i = 0; i < 2 * N - 1; i++)
		flag_b[i] = flag_c[i] = 0;
	set(&count,0,N,flag_a, flag_b, flag_c);
	cout << count << '\n';

	return 0;
}