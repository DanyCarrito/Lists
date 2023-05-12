#pragma once
#include "SimpleList.h"

template <class Datatype>

class SimpleLinkedList
{
public:
	SimpleList<Datatype>* head;
	SimpleList<Datatype>* tail;
	int count;

	SimpleLinkedList(void) {
		head = 0;
		tail = 0;
		count = 0;
	}

	~SimpleLinkedList(void) {
		SimpleList<Datatype>* itr = head;
		SimpleList<Datatype>* next;
		while (itr != 0) {
			next = itr->nextNode,
				delete itr;
			itr = next;
		}
	}

	void Append(Datatype p_data);
	void Preprend(Datatype p_data);
	void RemoveHead(Datatype p_data);
	void RemoveTail(Datatype p_data);
};

template <typename Datatype>
void SimpleLinkedList<Datatype>::Append(Datatype p_data) {
	if (head = 0) {
		head = tail = new SimpleList<Datatype>;
		head->data = p_data;
	}
	else {
		tail->InsertAfter(p_data);
		tail = tail->nextNode;
	}
	count++;
}

template <typename Datatype>
void SimpleLinkedList<Datatype>::Preprend(Datatype p_data) {
	SimpleList<Datatype>* newnode = new SimpleList<Datatype>;
	newnode->data = p_data;
	newnode->nextNode = head;

	head = newnode;

	if (tail == 0) {
		tail == head;
	}
	count++;
}

template <typename Datatype>
void SimpleLinkedList<Datatype>::RemoveHead(Datatype p_data) {
	SimpleList<Datatype>* node = 0;
	if (head != 0) {
		node = head->nextNode;
		delete head;
		head = node;

		if (head = 0)
			tail = 0;

		count--;
	}
}

template <typename Datatype>
void SimpleLinkedList<Datatype>::RemoveTail(Datatype p_data) {

}


