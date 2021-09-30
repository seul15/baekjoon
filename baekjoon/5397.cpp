#include<iostream>
#include<list>
using namespace std;

int main()
{
	int T=0;//테스트 케이스
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		list<char> word; //list 선언
		string word1;
		cin >> word1;
		auto crnt = word.end(); //auto -> 자동으로 자료형 할당 / 커서위치 crnt 선언후 word의 뒷부분 대입
		for (int i = 0; i < word1.length(); i++)
		{
			if (word1[i] == '<')
			{
				if (crnt != word.begin()) // <을 입력 받고 커서가 시작 점이 아니어야 커서가 앞으로 움직임
					crnt--;
			}
			else if (word1[i] == '>')
			{
				if (crnt != word.end()) // >을 입력 받고 커서가 끝나는 점이 아니어야 커서가 뒤로 움직임
					crnt++;
			}
			else if (word1[i] == '-')
			{
				if (crnt != word.begin()) // -을 입력 받고 커서가 시작 점이 아니어야 문자가 지워짐
				{
					crnt--;
					crnt=word.erase(crnt);
				}
			}
			else
			{
				word.insert(crnt, word1[i]); // >,<,- 을 제외한 모든 경우 커서 뒤로 단어 삽입
			}
		}
		for (char i : word) //word 출력
		{
			cout << i;
		}
		cout << '\n';
	}

	return 0;
}