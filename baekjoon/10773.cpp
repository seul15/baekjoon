#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int K,ans=0;
	stack<int>sum;
	cin >> K;
	for (int i = 0; i < K; i++) //K�� �ݺ�
	{
		int num=0;//�Է� �޴� ��
		cin >> num;
		if (num == 0)//0�Է� ���� ���
		{
			ans -= sum.top();//ans���� ������ top�� �����
			sum.pop();//������ top�κ��� ���
		}
		else//0 �̿��� ���ڸ� �Է� �޴� ���
		{
			sum.push(num);//���ÿ� num�� Ǫ��
			ans += num;//ans�� num���� ����
		}
	}

	cout << ans << '\n';

	return 0;
	
}