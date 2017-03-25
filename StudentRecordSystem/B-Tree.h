#pragma once
#include"linkedList.h"
#include<vector>
#include<iostream>

using namespace std;

class TreeNode {
public:
	int rollNumber;
	Node * data;
	vector<TreeNode *> children;

	TreeNode();
};
class BTree {
	int order;
	TreeNode * root;

	TreeNode * create_node(int rollNumber = 0, Node * data = nullptr);
public:
	BTree();
	bool add_record(Node * student);
	bool search(int key);

}