#include"bi_tree.h"

node* newnode(int val)
{
	node* n = new node;
	if (!n) return nullptr;
	n->key = val;
	n->pleft = n->pright = nullptr;
	return n;
}
void insert(node* left, int val)
{
	node* l = newnode(val);
	if (left == nullptr) left = l;
	if (val < left->key)
	{
		if(left->pleft!=nullptr)
		return insert(left->pleft, val);
	}
	if (val > left->key)
	{
		if (left->pright!=nullptr)
		return insert(left->pright, val);
	}
}
void input(node* tree)
{
	int n = 0;
	cout << "The number of elements: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x = 0;
		cout << "value: ";
		cin >> x;
		insert(tree, x);
	}
}
void initialize(node** W_tree)
{
	*W_tree = new node { nullptr, nullptr };
}
void output(node* tree)
{
	node* temp = tree;
	cout << tree->key;
	//while(tree->pleft!=nullptr)
}


