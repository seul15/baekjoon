#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int L=0,n,ans;
	int start, end;

	cin >> L;
	int S[100] = {0};

	for (int i = 0; i < L; i++)
	{
		cin >> S[i];
	}

	cin >> n;

	sort(S, S + L);

	for (int i = 0; i < L; i++)
	{
		if (S[i] == n)
		{
			cout << "0" << '\n';
			return 0;
		}
		else if (S[i] > n)
		{
			if (i == 0)
			{
				start = 0;
				end = S[i];
				break;
			}
			start = S[i - 1];
			end = S[i];

			break;
		}	
	}

	int right = end-n;
	int left = n-start-1;
	
	if (left < 0)
		ans = 0;
	else
		ans = left * right + (right - 1);

	cout << ans << '\n';


	return 0;
}