#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num,sum=0;
	cin >> num;
	string N,A;
	cin >> N;
	for (int i = 0; i < num; i++)
	{
		A = N[i];
		int a = stoi(A);
		sum += a;
	}
	cout << sum;
	return 0;
}