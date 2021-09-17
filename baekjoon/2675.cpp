#include<iostream>
#include<string>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		string S;
		string str;
		int R;
		cin >>R>> S;
		for (int j = 0; j < S.size(); j++)
		{
			for (int z = 0; z < R; z++)
			{
				str.push_back(S.at[i]);
			}
		}
		cout << str << '\n';
	}
	return 0;
}