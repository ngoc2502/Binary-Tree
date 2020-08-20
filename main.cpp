#include"caynhiphan.h"

using namespace std;

int main()
{
	Tnode* root = nullptr;
	root=new Tnode{nullptr, nullptr};
	/*insert(root, 1);
	insert(root, 6);
	insert(root, 0);
	insert(root, 10);*/
	FILE* fin ;
	char s[] = " nhi.bin";
	fin = fopen(s, "rb");
	if (!fin)
	{
		printf("error1!");
		return 0;
	}
	
	readbinary(s,root);
	outputTree(root);
	removeAllTnode(root);
	return 0;
}
