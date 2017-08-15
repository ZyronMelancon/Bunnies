#include <iostream>
#include <vector>
#include "Application.h"
#include "Bunny.h"

class node
{
public:
	int num;
	node * next;
	node(int n) { num = n; }
	~node() {}
};

class list
{
private:
	int numitems;
	node * front, * last;
	node * current;
public:
	list() { numitems = 0; }
	void add(node n)
	{
		if (numitems > 0)
		{
			last->next = &n;
			last = &n;
		}
		else
		{
			front = &n;
			last = &n;
		}
		numitems++;
	}
	void remove(node n)
	{
		current = front;
		for (int i = 0; i < numitems; i++)
		{
			if (current->next = &n)
				current->next = current->next->next;
		}
	}
	void print()
	{
		current = front;
		for (int i = 0; i < numitems; i++)
		{
			std::cout << current->num << std::endl;
			current = current->next;
		}
	}
};

int main()
{
	node one(1);
	node two(2);

	list zozzle;

	zozzle.add(one);
	zozzle.add(two);

	zozzle.print();
	system("PAUSE");
}