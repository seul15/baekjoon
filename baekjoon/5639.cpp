#include<iostream>
using namespace std;

int Tree[1000001][2];

void insert(int node,int data) {
	if (data > node) // 오른쪽 트리 타기
	{
		if (Tree[node][1] == NULL) // 오른쪽 자식이 없는 경우
		{
			Tree[node][1] = data;
		}
		else // 오른쪽 자식이 있는 경우
			insert(Tree[node][1], data);
	}
	else // 왼쪽 트리 타기
	{
		if (Tree[node][0] == NULL) // 왼쪽 자식이 없는 경우
		{
			Tree[node][0] = data;
		}
		else // 왼쪽 자식이 있는 경우
			insert(Tree[node][0], data);
	}
}

void postorder(int data) //후위 순회
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
	cin >> node; // 첫번째 입력이 키
	while (cin >> data)
	{
		insert(node, data);
	}
	postorder(node);
	return 0;
}