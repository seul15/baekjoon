#include<iostream>
#include<math.h>
using namespace std;

int node[1024];

int main()
{
	int K;
	cin >> K;
	int node_num = pow(2, K);
	for (int i = 1; i < node_num; i++)
	{
		cin >> node[i];
	}
	
	for (int k = K - 1; k >= 0; k--)
	{
		for (int i = 0; i < 1024; i++)
		{
			int num = pow(2, k) + pow(2, k + 1)*i;
			if (num < node_num)
				cout << node[num] << " ";
			else
				break;
		}
		cout << '\n';
	}
}