#include<iostream>
using namespace std;

void search(char a[], int *count)
{
	for (int i = 0; i <100; i++) 
	{
		for (int j = 1; j <100; j++) //�迭���� �ϳ��� �˻��ϴ� ����
		{
			if (a[i] != a[i+j])//�ܾ �ٲ�� ���� Ž��
			{
				for (int k = i + j+1; k < 100; k++)
				{
					if (a[i] == a[k])//�ܾ �ߺ��� ���
						return;//�Լ� �ߴ�
				}
			}
		}
		if (i == 99)//Ž���ؼ� ���� ���ڰ� ���� ���
			*count+=1;//�ܾ� ���� �÷���
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