#include"linkedList.h"

using namespace std;

int main()
{

	LinkedList list;

	Node * in = new Node();

	in->name = "Shaoor Munir";
	in->rollNumber = 4223;

	Node * in2 = new Node();

	in2->name = "Haider Ali";
	in2->rollNumber = 4163;

	Node * in3 = new Node();

	in3->name = "Ghufran Ahmed";
	in3->rollNumber = 4280;

	Node * in4 = new Node();

	in4->name = "Saad Tariq";
	in4->rollNumber = 4269;

	list.add_in_order(in);
	list.add_in_order(in2);
	list.add_in_order(in3);
	list.add_in_order(in4);

	cout << list.search(4223)->name << endl;


}