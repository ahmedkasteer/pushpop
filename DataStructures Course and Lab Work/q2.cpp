#include <iostream>
#include <string>
using namespace std;
class Stack
{
public:
	string expression;
	char value;
	int top;
	int size;
	int * stacksize = new int[size];
	char arr[20];

	Stack()
	{
		size = 0;
		top = -1;
		expression = "";
		value = ' ';
	}
bool isEmpty()
	{
		if (top == -1)
		{
			return true;
		}
	}
	bool isFull()
	{
		if (top = size - 1)
		{
			return true;
		}
	}
	void inputExpression()
	{
		cout << "Input expression" << endl;
		cin >> arr[20];
		for (int i = 0; i < 20; i++)
		{
			if (arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C' || arr[i] == 'D')
			{
				push(arr[i]);
			}
			else if (arr[i] == '+' || arr[i] == '-' || arr[i] == '*' || arr[i] == '/')
			{
				pop(arr[i]);
				pop(arr[i]);
			}
			expression = value;
			push(expression);
		}
	}
	void push(string val)
	{
		if (top != size -1)
		{
			stacksize[top] = val;
			top++;
			
		}
		else
		{
			cout << "stack overflow" << endl;
		}
	}
	void pop(string val)
	{
		if (top == -1)
		{
			cout << "Stack underflow" << endl;
		}
		val = stacksize[top];
		top--;
	}
	void display()
	{
		for (int i = -1; i < size; i++)
		{
			cout << stacksize[i] << endl;
		}
	}
};
int main()
{
	cout << "Input size" << endl;
	Stack obj;
	cin >> size;
	cout << "Input expression" << endl;
	getline(expression , cin);
	obj.display();
	system("pause");
	return 0;
}