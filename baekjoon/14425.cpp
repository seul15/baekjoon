#include<iostream>
#include<set>
using namespace std;

set<string>s;

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N, M, count = 0;
	string word,search_string;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> word;
		s.insert(word);
	}
	for (int j = 0; j < M; j++)
	{
		cin >> search_string;
		if (s.count(search_string) > 0)count++;
	}
	cout << count;
}