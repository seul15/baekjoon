#include<iostream>
#include<list>
using namespace std;

int main()
{
	int T=0;//�׽�Ʈ ���̽�
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		list<char> word; //list ����
		string word1;
		cin >> word1;
		auto crnt = word.end(); //auto -> �ڵ����� �ڷ��� �Ҵ� / Ŀ����ġ crnt ������ word�� �޺κ� ����
		for (int i = 0; i < word1.length(); i++)
		{
			if (word1[i] == '<')
			{
				if (crnt != word.begin()) // <�� �Է� �ް� Ŀ���� ���� ���� �ƴϾ�� Ŀ���� ������ ������
					crnt--;
			}
			else if (word1[i] == '>')
			{
				if (crnt != word.end()) // >�� �Է� �ް� Ŀ���� ������ ���� �ƴϾ�� Ŀ���� �ڷ� ������
					crnt++;
			}
			else if (word1[i] == '-')
			{
				if (crnt != word.begin()) // -�� �Է� �ް� Ŀ���� ���� ���� �ƴϾ�� ���ڰ� ������
				{
					crnt--;
					crnt=word.erase(crnt);
				}
			}
			else
			{
				word.insert(crnt, word1[i]); // >,<,- �� ������ ��� ��� Ŀ�� �ڷ� �ܾ� ����
			}
		}
		for (char i : word) //word ���
		{
			cout << i;
		}
		cout << '\n';
	}

	return 0;
}