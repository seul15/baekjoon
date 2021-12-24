#include<iostream>
#include<deque>
using namespace std;

int main()
{
	int N, M,num,count=0; //N : ť�� ũ�� / M : �̾Ƴ����� �ϴ� ���� ���� / num : �̾Ƴ����� �ϴ� ���� ��ġ / count : �� �̵�Ƚ��
	int location=0,move; //location : ���� Ŀ���� ��ġ / move : �̵� Ƚ��
	cin >> N >> M;

	deque<int>dq; //�ڷ����� int���� �� dq ���� 

	for (int i = 1; i <= N; i++) //dq�� 1~N ����
	{
		dq.push_back(i); //dq�� �� �ڿ� i ����
	}

	for (int j = 0; j < M; j++)
	{
		move = 0; //�̵� Ƚ�� �ʱ�ȭ
		cin >> num;
		while (dq[(location + move) % dq.size()] != num) // �Է¹��� ���� ���� �� ���� �̵� ��Ŵ
		{
			move++;
		}
		if (move <= dq.size() / 2) //�������� �̵���Ű�°� �ּ��� ���
		{
			count += move;
			dq.erase(dq.begin() + (location + move) % dq.size()); //mod ������ �̿��Ͽ� location+move ���� ���� ũ�⸦ ���� �ʵ��� ��
		}
		else //���������� �̵���Ű�°� �ּ��� ���
		{
			count += (dq.size() - move);
			dq.erase(dq.begin() + (location + move) % dq.size());
		}
		location = (location + move) % (dq.size() + 1); // ���� Ŀ�� ��ġ �缳��
	}
	cout << count << '\n';

	return 0;
}