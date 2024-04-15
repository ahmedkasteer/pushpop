#include <iostream>
using namespace std;
class ListADT
{
private:
	int *list;
	int *list2;
public:
	
	ListADT()
	{
		int *list;
		list = new int[10];
		int *list2;
		list2 = new int[10];
		
		for (int i = 0; i < 9; i++)
		{
			list[i] = 0;
		}
		for (int i = 0; i < 9; i++)
		{
			list2[i] = 0;
		}
	};
	
	ListADT(int a, int b)
	{
		
		int *list;
		list = new int[a];
		int *list2;
		list2 = new int[b];
		
		for (int i = 0; i < a; i++)
		{
			list[i] = 0;
		}
		for (int i = 0; i < b; i++)
		{
			list2[i] = 0;
		}
	};

	/*ListADT(ListADT & obj)
	{
		
	};*/
	
	~ListADT()
	{};

	void PrintList()
	{
		cout << "take input for the list" << endl;
		for (int i = 0; i < 9; i++)
		{
			cout << "Enter element in list" << endl;
			cin >> list[i];
		}
		cout << "Printing first list" << endl;
		for (int i = 0; i < 9; i++)
		{
			cout << list[i] << " " << endl; 
		}

		/*cout << "Printing second list" << endl;
		for (int i = 0; i < 9; i++)
		{
			cout << list2[i] << " " << endl;
		}*/

	};

	int searchElement(int x)
	{
		cout << "Enter number to search within the list" << endl;
		cin >> x;
		for (int i = 0; i < 9; i++)
		{
			if (x == list[i])
			{
				cout << "Number found" << endl;
			}
			else
			{
				cout << "number not found" << endl;
			}
		}
		return x;
	};
	void insertElement(int x)
	{
		for (int i = 0; i < 9; i++)
		{
			cout << "Enter any number to insert in LIST 1" << endl;
			cin >> x;
			list[i] = x;
		}
		/*for (int i = 0; i < 9; i++)
		{
			cout << "Enter any number to insert in list 2" << endl;
			cin >> x;
			list2[i] = x;
		}*/
	};
	void insertElementAt(int x, int pos)
	{
		cout << "Enter any number to insert at specific index of list 1" << endl;
		cin >> x;
		cout << "Enter index position for list 1" << endl;
		cin >> pos;
		list[pos] = x;

		/*cout << "Enter any number to insert at specific index of list 2" << endl;
		cin >> x;
		cout << "Enter index position for list 2" << endl;
		cin >> pos;
		list2[pos] = x;*/
	};
	bool boolDeleteElement(int x)
	{
		
		bool deleted = false;
		for (int i = 0; i < 9; i++)
		{
			cout << "Enter a number to be deleted from the list 1;" << endl;
			if (list[i] == x)
			{
				list[i] = 0;
				deleted = true;
			}
			else
			{
				cout << "number not found in the list to be deleted" << endl;
				deleted = false;
			}
		}
		return deleted;
	};
	bool isFull()
	{
		bool full = false;
		int counter = 0;

		for (int i = 0; i < 9; i++)
		{
			if (list[i] > 0)
			{
				counter += 1;
			}
			if (counter == 10)
			{
				cout << "Array is full" << endl;
				full = true;
			}
		}
		return full;
	};

	bool isEmpty()
	{
		bool empty = false;
		int counter0 = 0;
		
		for (int i = 0; i < 9; i++)
		{
			if (list[i] == 0)
			{
				counter0 += 1;
			}
			if (counter0 == 10)
			{
				cout << "Array is empty" << endl;
				empty = true;
			}
			else
			{
				cout << "array is not empty" << endl;
			}
		}
		return empty;
	};
	int length()
	{
		int count = 0;

		for (int i = 0; i < 9; i++)
		{
			if (list[i] > 0)
			{
				count += 1;
			}
		}
		cout << "Length of array is " << count << endl;
	}
};


int main()
{
	ListADT list;
	list.ListADT();
	list.ListADT(9, 7);
	while (cin)
	{
		int choice;
		cout << "1. Print list" << endl;
		cout << "2. Search element in list" << endl;
		cout << "3. Insert element in list" << endl;
		cout << "4. Insert element at specific index in list" << endl;
		cout << "5. Bool delete element from a list" << endl;
		cout << "6. Bool list is full " << endl;
		cout << "7. Bool list is Empty" << endl;
		cout << "8. Length of list" << endl;
		cout << "Enter a string or keyword to exit." << endl;
		cin >> choice;
		if (choice == 1)
		{
			list.PrintList();
		}
		else if (choice == 2)
		{
			list.searchElement(3);
		}
		else if (choice == 3)
		{
			list.insertElement(9);
		}
		else if (choice == 4)
		{
			list.insertElementAt(9, 4);
		}
		else if (choice == 5)
		{
			list.boolDeleteElement(4);
		}
		else if (choice == 6)
		{
			list.isFull();
		}
		else if (choice == 7)
		{
			list.isEmpty();
		}
		else if(choice == 8)
		{
			list.length();
		}
		else
		{
			cout << "Enter correct number from menu" << endl;
		}
		
	}
	system("pause");
	return 0;
}