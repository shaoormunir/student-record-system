#pragma once
#include<string>
#include<vector>
#include<iostream>
using namespace std;

class course {
public:
	string cname;
	int creditHours;
	string grade;
};
class Node {
public:
	Node * next;
	Node * prev;
	int rollNumber;
	string name;
	vector<course *> courses;

public:
	Node()
	{
		this->next = nullptr;
		this->prev = nullptr;
	}
};

class LinkedList {

	Node * root;
	Node * create_node(int rollNumber = 0, string name = "");

public:
	LinkedList();
	bool add_in_order(Node * in);
	Node * search(int key);
	bool delete_node(int key);
	void print();
};