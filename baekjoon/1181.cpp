#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(const string &word1,const string &word2) // 내림차순
{
	if (word1.size() == word2.size())
	{
		return word1 < word2; //(사전순으로 비교) word2가 클 경우 true word1이 클 경우 false
	}
	return word1.size() < word2.size(); // word2가 클 경우 true word1이 클 경우 false
}

int main() {
	int N;//입력 받는 단어 개수
	cin >> N;
	vector<string>word;
	string w;
	for (int i = 0; i < N; i++)
	{	
		cin >> w;
		word.push_back(w);
	}

	sort(word.begin(), word.end(),cmp);

	for (int i = 0; i < N; i++)
	{
		if (i < N - 1 && word[i].size()==word[i+1].size())//다음 단어와 길이가 같은 경우
		{
			for (int j = 0; j < word[i].size(); j++)
			{
				if (word[i][j] == word[i + 1][j]) continue;// 단어가 같을 경우 스킵
				else
				{
					cout << word[i] << '\n'; //아닐 경우 
					break;
				}
			}
		}
		else cout << word[i] <<'\n';
	}
	
	return 0;
}