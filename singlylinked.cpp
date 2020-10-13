#include<iostream>
using namespace std;

struct Node
{
	int val;
	Node* next;
	Node() : val(0), next(nullptr) {}
	Node(int x) : val(x), next(nullptr) {}
	Node(int x, Node *next) : val(x), next(next) {}
};

int main()
{	
	Node* head = new Node(1);
	Node* first = new Node();
	first = head;
	int val;
	while(cin >> val)
	{
		if ( val != 0)
		{
			Node* node = new Node(val);
			head->next = node;
			head = head->next;
		}
		else
			break;
	}	

	while(first)
	{
		cout << first;
		first = first->next;
	}
}
