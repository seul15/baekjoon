#include<iostream>
using namespace std;

int Tree[1000001][2];

void insert(int node,int data) {
	if (data > node) // ������ Ʈ�� Ÿ��
	{
		if (Tree[node][1] == NULL) // ������ �ڽ��� ���� ���
		{
			Tree[node][1] = data;
		}
		else // ������ �ڽ��� �ִ� ���
			insert(Tree[node][1], data);
	}
	else // ���� Ʈ�� Ÿ��
	{
		if (Tree[node][0] == NULL) // ���� �ڽ��� ���� ���
		{
			Tree[node][0] = data;
		}
		else // ���� �ڽ��� �ִ� ���
			insert(Tree[node][0], data);
	}
}

void postorder(int data) //���� ��ȸ
{
	if (data == NULL)
		return;
	postorder(Tree[data][0]);
	postorder(Tree[data][1]);
	cout << data<<'\n';
}

int main()
{
	int node,data;
	cin >> node; // ù��° �Է��� Ű
	while (cin >> data)
	{
		insert(node, data);
	}
	postorder(node);
	return 0;
}