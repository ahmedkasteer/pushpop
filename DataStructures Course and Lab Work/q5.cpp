#include<iostream>
using namespace std;

struct node {
	int data;
	node* left;
	int balancefactor;
	int height;
	node* right;
};
class AVL
{
	node * root;

	node* getHeight(int a, int b)
	{
		if (a > b)
		{
			return;
		}
	}

	node* makeEmpty(node* t) {
		if (t == NULL)
			return NULL;
		{
			makeEmpty(t->left);
			makeEmpty(t->right);
			delete t;
		}
		return NULL;
	}

	node* insert(int x, node* t)
	{
		if (t == NULL)
		{
			t = new node;
			t->data = x;
			t->left = t->right = NULL;
		}
		else if (x < t->data)
			t->left = insert(x, t->left);
		else if (x > t->data)
			t->right = insert(x, t->right);
		return t;
			
		
	}
	// now implementing rotations:
	// right rotation with subtree managing
	node * rightrotation(node * y)
	{
		node * x = y->left;
		node * t2 = x->right;
		x->right = y;
		y->left = t2;
		x->getHeight = int max(getHeight(x), getHeight(y)) + 1;
		y->getHeight = int max(getHeight(y), getHeight(x)) + 1;
		return y;
	}
	
	// single left rotation with subtree managing
	node* leftrotation(node*x)
	{
		node* y = x->right;
		node*t2 = y->left;
		y->left = x;
		x->right = t2;
		y->getHeight = int max(getHeight(x), getHeight(y)) + 1;
		x->getHeight = int max(getHeight(y), getHeight(x)) + 1;
	}
	//getting balanceFactor 
	node * getBalanceFactor(node*p)
	{
		if (p == NULL)
		{
			return p;
		}
		// right rotation 
		if (balancefactor > 1 && value < node->left->value)
		{
			rightrotation(node->right);
		}
		//left rotation
		if (balancefactor < -1 && value > node->right value)
		{
			leftrotation(node->left);
		}
		if (balancefactor > 1 && value > node->left->value)
		{
			right->node = rightrotation(right rotation);
			return leftrotation(left->rotation);
		}
		if (balancefactor < -1 && value < node->left->value)
		{
			left->node = rightrotation(left->rotation);
			return rightrotation(right->rotation);
		}
	}
	// checking balance factor
	
};
class BSTTOAVL {
	node* root;

	node* makeEmpty(node* t) {
		if (t == NULL)
			return NULL;
		{
			makeEmpty(t->left);
			makeEmpty(t->right);
			delete t;
		}
		return NULL;
	}

	node* insert(int x, node* t)
	{
		if (t == NULL)
		{
			t = new node;
			t->data = x;
			t->left = t->right = NULL;
		}
		else if (x < t->data)
			t->left = insert(x, t->left);
		else if (x > t->data)
			t->right = insert(x, t->right);
		return t;
	}

	node* findMin(node* t)
	{
		if (t == NULL)
			return NULL;
		else if (t->left == NULL)
			return t;
		else
			return findMin(t->left);
	}

	node* findMax(node* t) {
		if (t == NULL)
			return NULL;
		else if (t->right == NULL)
			return t;
		else
			return findMax(t->right);
	}

	node* remove(int x, node* t) {
		node* temp;
		if (t == NULL)
			return NULL;
		else if (x < t->data)
			t->left = remove(x, t->left);
		else if (x > t->data)
			t->right = remove(x, t->right);
		else if (t->left && t->right)
		{
			temp = findMin(t->right);
			t->data = temp->data;
			t->right = remove(t->data, t->right);
		}
		else
		{
			temp = t;
			if (t->left == NULL)
				t = t->right;
			else if (t->right == NULL)
				t = t->left;
			delete temp;
		}

		return t;
	}

	void inorder(node* t) {
		if (t == NULL)
			return;
		inorder(t->left);
		cout << t->data << " ";
		inorder(t->right);
	}

	node* find(node* t, int x) {
		if (t == NULL)
			return NULL;
		else if (x < t->data)
			return find(t->left, x);
		else if (x > t->data)
			return find(t->right, x);
		else
			return t;
	}

public:
	BSTTOAVL() {
		root = NULL;
	}

	~BSTTOAVL() {
		root = makeEmpty(root);
	}

	void insert(int x) {
		root = insert(x, root);
	}

	void remove(int x) {
		root = remove(x, root);
	}

	void display() {
		inorder(root);
		cout << endl;
	}

	void search(int x) {
		root = find(root, x);
	}

};

int main() {
	BSTTOAVL t;
	t.insert(20);
	t.insert(25);
	t.insert(15);
	t.insert(10);
	t.insert(30);
	t.display();
	t.remove(20);
	t.display();
	system("pause");
	return 0;
}
