#include<iostream>
using namespace std;

void check(char a[],int *i, int *count)
{
	if (a[*i] == 'c')
	{
		if (a[*i + 1] == '=')//c= ���� üũ[�ؿ��� ������ ����]
		{
			*i += 1;//������� ���� ���� �Ѱ��ֱ�
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
	*count += 1;//���ĺ� ���� ����
}


int main()
{
	char word[100] = {};
	int count = 0;
	cin >> word;
	for (int i = 0; i < 100; i++)
	{
		if (word[i] == NULL)//�迭�� ������� ����
			break;
		check(word, &i, &count);
	}

	cout << count;

	return 0;
}