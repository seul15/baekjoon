#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<char>word;
	string word1;
	cin >> word1;
	int M;//명령 개수
	cin >> M;
	for (char i : word1)
	{
		word.push_back(i);
	}
	auto crnt = word.end();
	for (int i = 0; i < M; i++)
	{
		char order;
		cin >> order;
		if (order == 'L')
		{
			if (crnt != word.begin())
				crnt--;
		}
		else if (order == 'D')
		{
			if (crnt != word.end())
				crnt++;
		}
		else if (order == 'B')
		{
			if (crnt != word.begin())
			{
				crnt--;
				crnt = word.erase(crnt);
			}
		}
		else if (order == 'P')
		{
			char alpha;
			cin >> alpha;
			word.insert(crnt, alpha);
		}
	}
	for (char i : word)
	{
		cout << i;
	}
	cout << '\n';
	return 0;
}