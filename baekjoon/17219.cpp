#include<iostream>
#include<map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false); //Ω√∞£ ¥‹√‡

	map<string, string>password;

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		string site, password1;
		cin >> site >> password1;
		password.insert(make_pair(site,password1)); //make_pair∑Œ π≠æÓ¡‹
	}
	for (int j = 0; j < M; j++)
	{
		string check;
		cin >> check;
		cout << password[check] << '\n';
	}

	return 0;
}