#pragma once
#include "Bunny.h"

class ListNode
{
private:
	Bunny bunny;
	ListNode * next;
public:
	ListNode(Bunny b, ListNode * next);
};

class LinkedList
{
private:

public:
	LinkedList();
	~LinkedList();
	bool Empty();
	void Insert(Bunny b);
	void Remove(ListNode n);
};