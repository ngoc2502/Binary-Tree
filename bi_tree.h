#include<iostream>
using namespace std;
struct node
{
	node* pleft;
	node* pright;
	int key;
};
void initialize(node** W_tree);
void input(node* tree);
node* newnode(int val);
void insert(node* left, int val);

