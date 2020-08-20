#include"bi_tree.h"

int main()
{
	node* tree = new node;
	initialize(&tree);
	input(tree);
	delete tree;
	tree = nullptr;
}