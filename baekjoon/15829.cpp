#include<iostream>
using namespace std;

#define Mod 1234567891
//(a*b)%c=((a%c)*(b%c))%c(a*b)%c=((a%c)*(b%c))%c​
long long pow_mod(long long a, int n, int mod)
{
	long long result=1;

	while (n)
	{
		if (n % 2==1)
		{
			result %= mod;
			result *= a;
			result %= mod;
		}
		//a^n->(a^2)^n/2 형태로 만듦
		a *= a;
		a %= mod;
		n /= 2;
	}
	return result;
}

int main()
{
	char L[51];
	int length;
	cin >> length;
	long long hash=0;
	for (int i = 0; i < length; i++)
	{
		cin >> L[i];
		hash += (long long)(((int)L[i]%96) * pow_mod(31, i, Mod));
		if (hash >= Mod) hash %= Mod;
	}
	
	cout << hash << '\n';

	return 0;
}