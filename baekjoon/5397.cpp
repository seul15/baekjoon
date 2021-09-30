#include<iostream>
using namespace std;

class Node{
public:
	char data;
	Node* next;
};

class List {
private:
	Node* head;
	Node* tail;
	Node* crnt;
public:
	List();
	void insert(char);
	void forward();
	void backward();
	void print();
	void delete_node();
};

List::List()
{
	head = tail = crnt = NULL;
}

void List::insert(char word)
{
	Node* new_node = new Node;
	new_node->data = word;
	new_node->next = NULL;
	if (crnt == NULL)
		head = crnt = new_node;
	else if (crnt == tail)
		tail = crnt = new_node;
	else 
		crnt->next = new_node;
}

void List::delete_node()
{
	if (head != NULL) {
		if (crnt == head)
		{
			Node* ptr = head->next;
			free(head);
			head = crnt = ptr;
		}
		else
		{
			Node* ptr = head;
			while (ptr->next != crnt)
				ptr = ptr->next;
			ptr->next = crnt->next;
			free(crnt);
			crnt = ptr;
		}
	}
}

void List::forward()
{
	if (crnt != NULL && crnt != head)
	{
		Node* ptr = head;
		while (crnt != ptr->next)
			ptr = ptr->next;
		crnt = ptr;
	}
	else if (crnt == head)
	{
		crnt = NULL;
	}
}

void List::backward() 
{
	if (crnt != NULL && crnt != tail)
		crnt = crnt->next;
}

int main()
{
	List key_logger;
	int T=0;//테스트 케이스
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < 1000000; j++)
		{
			char word;
			cin >> word;
			switch (word)
			{
			case '<':
				key_logger.forward();
			case'>':
				key_logger.backward();
			case'-':
				key_logger.delete_node();
			case' ':
				break;
			default:
				key_logger.insert(word);
		}

		}
	}


	return 0;
}