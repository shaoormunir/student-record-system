#include "linkedList.h"
using namespace std;
LinkedList::LinkedList()
{
	root = nullptr;
}

bool LinkedList::add_in_order(Node * in)
{
	Node * curr = root;
	Node * prev = nullptr;
	while (curr != nullptr)
	{
		if (curr->rollNumber > in->rollNumber)
		{
			break;
		}
		if (curr->rollNumber == in->rollNumber)
		{
			return false;
		}
		prev = curr;
		curr = curr->next;
	}
	if (prev == nullptr) //adding at the start of the list
	{
		in->next = root;
		in->prev = nullptr;
		if (root != nullptr)
			root->prev = in;
		root = in;
	}
	else if (curr == nullptr) //adding at the end of the list
	{
		in->next = nullptr;
		in->prev = prev;
		prev->next = in;
	}
	else //adding somewhere in the middle
	{
		in->next = curr;
		in->prev = prev;
		curr->prev = in;
		prev->next = in;
	}
	
	return true;
}

Node * LinkedList::search(int key)
{
	Node * temp = root;

	while (temp != nullptr)
	{
		if (temp->rollNumber == key)
			return temp;
		temp = temp->next;
	}
	return nullptr;
}

bool LinkedList::delete_node(int key)
{
	Node * temp = root;

	while (temp != nullptr)
	{
		if (temp->rollNumber == key)
			break;
	}

	if (temp == nullptr) // not found
	{
		return false;
	}
	if (temp->prev = nullptr) //root is going to be deleted
	{
		root = temp->next;
		root->prev = nullptr;
	}
	else
	{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
	}
	delete temp;
	return true;
}

void LinkedList::print()
{
	Node * temp = root;
	while (temp != nullptr)
	{
		cout << temp->rollNumber << "  " << temp->name << endl;
		temp = temp->next;
	}
}