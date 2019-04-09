#pragma once
#include <iostream>
using namespace std;


struct Node {
	int data;
	Node* next;
	Node* back;
	Node* status;
};

class DoubleLinkedlist
{
public:
	DoubleLinkedlist();
	~DoubleLinkedlist(); 
	void PushFront(int value);
	void PushBack(int value);
	void Begin();
	void End();
	void Insert(int iteration, int value);
	void Last();
	//void Insert(void(*f), int value);
	void First();
private:
	Node* head;
	Node* tail; 
};

