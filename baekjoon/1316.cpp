#include<iostream>
using namespace std;

void search(char a[], int *count)
{
	for (int i = 0; i <100; i++) 
	{
		for (int j = 1; j <100; j++) //배열에서 하나씩 검사하는 과정
		{
			if (a[i] != a[i+j])//단어가 바뀌는 구간 탐색
			{
				for (int k = i + j+1; k < 100; k++)
				{
					if (a[i] == a[k])//단어가 중복될 경우
						return;//함수 중단
				}
			}
		}
		if (i == 99)//탐색해서 같은 문자가 없는 경우
			*count+=1;//단어 개수 플러스
	}
	return;
}

int main()
{
	int count = 0;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		char word[100] = { };
		cin >> word;
		search(word, &count);
	}
	cout << count << '\n';

	return 0;
}