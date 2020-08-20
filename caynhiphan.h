#include<iostream>
#pragma warning(disable:4996)
using namespace std;
struct Tnode
{
	
	Tnode* pleft;
	Tnode* pright;
	int key;
};
bool isLeaf(Tnode* root);
Tnode* newnode(int r_val);
int insert(Tnode* &u_root, int r_val);
bool isEmpty(Tnode* root);
void removeAllTnode(Tnode* root);
void outputTree(Tnode* root);
Tnode* SearchOnTree(Tnode* root, int val);
void readbinary(char* Path, Tnode* root);
