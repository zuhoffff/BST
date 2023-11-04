#include "main.h"	

using namespace std;

int main()
{
	int TreeKeys[16] = { 50,76,21,4,32,64,15,52,14,100,83,2,3,70,87,80 };
	BST myTree;
	int input = 0;

	cout << "Printing the tree in order\nBefore adding numbers\n";

	myTree.PrintInOrder();

	for (int i = 0; i < 16; i++)
	{
		myTree.AddLeaf(TreeKeys[i]);
	}
	cout << "Printing the tree in order\nAfter adding numbers\n";

	myTree.PrintInOrder();

	cout << endl;
	
	//myTree.PrintChildren(myTree.ReturnRootKey());

	/*for (int i = 0; i < 16; i++)
	{
		myTree.PrintChildren(TreeKeys[i]);
		cout << endl;
	}*/

	cout<<"The smallest value in the tree is: "<<myTree.FindSmallest()<<'\n';

	cout << "Enter a key velue to delete. Enter -1 to stop the proces\n";

	while (input != -1)
	{
		cout << "Delete Node: ";
		cin >> input;
		if (input != -1)
		{
			cout << endl;
			myTree.RemoveNode(input);
			myTree.PrintInOrder();
			cout << endl;
		}
	}

	return 0;
}