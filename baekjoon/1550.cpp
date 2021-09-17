#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int ans=0;
	string num;
	cin >> num;
	for (int i = 0; i < num.length(); i++)
	{
		if (num[i] >= 'A')
		{
			ans += (num[i] - 'A'+10) * pow(16, num.length() - i - 1);
		}
		else
		{
			ans += (num[i]-'0') * pow(16, num.length() - i - 1);
		}
	}

	cout << ans;

	return 0;
}