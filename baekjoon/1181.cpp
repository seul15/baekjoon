#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(const string &word1,const string &word2) // ��������
{
	if (word1.size() == word2.size())
	{
		return word1 < word2; //(���������� ��) word2�� Ŭ ��� true word1�� Ŭ ��� false
	}
	return word1.size() < word2.size(); // word2�� Ŭ ��� true word1�� Ŭ ��� false
}

int main() {
	int N;//�Է� �޴� �ܾ� ����
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
		if (i < N - 1 && word[i].size()==word[i+1].size())//���� �ܾ�� ���̰� ���� ���
		{
			for (int j = 0; j < word[i].size(); j++)
			{
				if (word[i][j] == word[i + 1][j]) continue;// �ܾ ���� ��� ��ŵ
				else
				{
					cout << word[i] << '\n'; //�ƴ� ��� 
					break;
				}
			}
		}
		else cout << word[i] <<'\n';
	}
	
	return 0;
}