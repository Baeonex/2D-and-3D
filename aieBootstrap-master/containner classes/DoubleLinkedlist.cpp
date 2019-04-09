#include "DoubleLinkedlist.h"
#include <crtdbg.h>


DoubleLinkedlist::DoubleLinkedlist()
{
}


DoubleLinkedlist::~DoubleLinkedlist()
{
}

void DoubleLinkedlist::PushFront(int value)
{
	if (NULL == head)
	{
		head = head->status;
		head->data = value;
		if (tail == NULL)
			head->next = tail;
		else
			head->next = NULL;
		head->back = NULL;
	}
	else
	{
		Node* node;
		node->data = value;
		node->back = head;
		node->next = NULL;
		head->next = node;
	}

}

void DoubleLinkedlist::PushBack(int value)
{
	if (NULL == tail)
	{
		tail = tail->status;
		tail->data = value;
		tail->next = NULL;
		if (head == NULL)
			tail->back = head;
		else
			tail->back = NULL;
	}
	else
	{
		Node* node;
		node->data = value;
		node->back = tail;
		node->next = NULL;
		head->next = node;
	}
}

void DoubleLinkedlist::Begin()
{
	Node* currentNode;
	currentNode = head;
	while (currentNode != NULL)
		currentNode = currentNode->next;
}
void DoubleLinkedlist::End()
{
	Node* currentNode;
	currentNode = tail;
	while (currentNode != NULL)
		currentNode = currentNode->back;
}
void DoubleLinkedlist::First()
{
	if (head != NULL)
		int value = head->data;
	else
		asser
}
void DoubleLinkedlist::Last()
{
	int value = tail->data;
}
void DoubleLinkedlist::Insert(int iteration, int value)
{
	Node* currentNode;
	currentNode->data = value;
	Node* moverNode;
	currentNode = head;
	for (int i = 0; i == iteration; ++i)
	{
		currentNode = currentNode->next;
		if (i == iteration)
		{
			currentNode->back->next = currentNode;
			currentNode->next->back = currentNode;
		}
	}
}

