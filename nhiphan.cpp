#include "caynhiphan.h"
#pragma warning(disable:4996)
using namespace std;

bool isEmpty(Tnode* root)
{
	if (root==nullptr) return true;
	return false;
}


bool isLeaf(Tnode* root)
{
	if (root->pleft == root->pright && root->pleft == nullptr) return true;
	return false;
}
Tnode* newnode(int r_val)
{
	Tnode* no = new Tnode;
	no->key = r_val;
	no->pleft = no->pright = nullptr;
	return no;
}
int insert(Tnode*& u_root, int r_val)
{
	if (u_root != nullptr)
	{
		if (u_root->key < r_val) return insert(u_root->pleft, r_val);
		if (u_root->key > r_val) return insert(u_root->pleft, r_val);
		if (u_root->key == r_val) return -1;// value existed
	}
	u_root = new Tnode;
	if (u_root == nullptr) return 0;// fail
	u_root->key = r_val;
	u_root->pleft = u_root->pright = nullptr;
	return 1;// success
}

void removeAllTnode(Tnode* root)
{
	if (root == nullptr) return;
	delete root;
	root = nullptr;
	return removeAllTnode(root->pleft);
	return removeAllTnode(root->pright);
}

void outputTree(Tnode* root)
{
	if (root == nullptr) return;
	cout << root->key << "\t";
	return outputTree(root->pleft);
	return outputTree(root->pright);
}

Tnode* SearchOnTree(Tnode* root, int val)
{
	if (root == nullptr) return nullptr;
	if (root->key == val) return root;
	if (root->key < val) return SearchOnTree(root->pright, val);
	return SearchOnTree(root->pleft, val);
}
void readbinary(char* Path, Tnode*root)
{
	FILE* fin = fopen(Path, "rb");
	if (!fin)
	{
		cout << "error!";
		return;
	}
	int n = 0;
	fread(&n, sizeof(n), 1, fin);
	int x = 0;
	fread(&x, sizeof(x), 1, fin);
	insert(root, x);
	fclose(fin);
}