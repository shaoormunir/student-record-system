#include "B-Tree.h"

TreeNode::TreeNode()
{
	this->data = nullptr;
}

TreeNode * BTree::create_node(int rollNumber, Node * data)
{
	TreeNode * temp = new TreeNode();

	temp->rollNumber = rollNumber;
	temp->data = data;

	return temp;
}
