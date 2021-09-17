#include<iostream>
using namespace std;

void count(int *X,int *ans)
{
	if (*X == 64)
	{
		*X -= 64;
		*ans+=1;
		return;
	}
	else if (*X >= 32)
	{
		*X -= 32;
		*ans+=1;
		return;
	}
	else if (*X >= 16)
	{
		*X -= 16;
		*ans+=1;
		return;
	}
	else if (*X >= 8)
	{
		*X -= 8;
		*ans+=1;
		return;
	}
	else if (*X >= 4)
	{
		*X -= 4;
		*ans+=1;
		return;
	}
	else if (*X >= 2)
	{
		*X -= 2;
		*ans+=1;
		return;
	}
	else {
		*X -= 1;
		*ans+=1;
		return;
	}
}

int main() {
	int X;
	cin >> X;

	int ans = 0;

	while (X > 0)
	{
		count(&X, &ans);
	}

	cout << ans << '\n';

	return 0;
}