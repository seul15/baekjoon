#include<iostream>
using namespace std;

void check(char a[],int *i, int *count)
{
	if (a[*i] == 'c')
	{
		if (a[*i + 1] == '=')//c= 문자 체크[밑에과 동일한 형식]
		{
			*i += 1;//맞을경우 문자 순서 넘겨주기
		}
		else if (a[*i + 1] == '-')
		{
			*i += 1;
		}
	}
	else if (a[*i] == 'd')
	{
		if (a[*i + 1] == '-')
		{
			*i += 1;
		}
		else if (a[*i + 1] == 'z')
		{
			if (a[*i + 2] == '=')
			{
				*i += 2;
			}
		}
	}
	else if (a[*i] == 'l')
	{
		if (a[*i + 1] == 'j')
		{
			*i += 1;
		}
	}
	else if (a[*i] == 'n')
	{
		if (a[*i + 1] == 'j')
		{
			*i += 1;
		}
	}
	else if (a[*i] == 's')
	{
		if (a[*i + 1] == '=')
		{
			*i += 1;
		}
	}
	else if (a[*i] == 'z')
	{
		if (a[*i + 1] == '=')
		{
			*i += 1;
		}
	}
	*count += 1;//알파벳 개수 증가
}


int main()
{
	char word[100] = {};
	int count = 0;
	cin >> word;
	for (int i = 0; i < 100; i++)
	{
		if (word[i] == NULL)//배열이 비었을때 중지
			break;
		check(word, &i, &count);
	}

	cout << count;

	return 0;
}