////QUESTION 1 LINKEDLIST
//#include <iostream>
//using namespace std;
//struct Node
//{
//	Node * next;
//	int value;
//};
//Node* head = NULL;
//class Linkedlist
//{
//public:
//	Linkedlist()
//	{
//		int val = 0;
//		Node* head = NULL;
//	}
//	~Linkedlist()
//	{
//
//	}
//
//	void insert(Node * &head,int val)
//	{
//		Node *newNode = new Node;
//		newNode->value = val;
//		if (head = NULL)
//		{
//			head = newNode;
//		}
//		 newNode->next= head;
//		 head = newNode;
//		 if (val== newNode->value)
//		 {
//			 cout << "Value is already inserted into linkedlist and can't be duplicated" << endl;
//		 }
//		
//	}
//
//	void search(Node* head, int val)
//	{
//		Node* temp = head;
//		while (temp->next != NULL)
//		{
//			if (val == temp->value)
//			{
//				cout << "Value Found" << endl;
//			}
//			else
//			{
//				cout << "Value not found" << endl;
//			}
//			temp = temp->next;
//		}
//	}
//
//	void display(Node* head)
//	{
//
//		Node* temp = head;
//		while (temp->next != NULL)
//		{
//			cout << temp->value << endl;
//			temp = temp->next;
//		}
//
//	}
//
//};
//
//int main()
//{
//	Linkedlist obj; 
//	obj.insert(head,13);
//	obj.insert(head, 32);
//	obj.insert(head, 1);
//	obj.insert(head, 12);
//	obj.insert(head, 12);
//	obj.search(head, 44);
//	obj.display(head);
//	system("pause");
//	return 0;
//}