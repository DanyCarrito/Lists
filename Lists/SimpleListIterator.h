#pragma once
#include "SimpleLinkedList.h"
#include "SimpleList.h"

template <class Datatype>

class SimpleListIterator
{
public:
	SimpleList<Datatype>* currentNode;
	SimpleLinkedList<Datatype>* list;
	SimpleListIterator(SimpleList<Datatype>* p_currentNode = 0,
		SimpleLinkedList<Datatype>* p_list) {
		list = p_list;
		currentNode = p_currentNode;
	}

	void Start(void);
	void MoveIterator();
	Datatype& Item();
	bool isValid();
	SimpleListIterator<Datatype> GetIterator();

	template <typename Datatype>
	void SimpleListIterator<Datatype>::Start(void) {
		if (list != 0)
			currntNode = list->head;
	}

	template <typename Datatype>
	void SimpleListIterator<Datatype>::MoveIterator(void) {
		if (currentNode != 0)
			currentNode = currentNode->nextNode;
	}

	template <typename Datatype>
	Datatype& SimpleListIterator<Datatype>::getItem(void) {
		return currentNode->data;
	}

	template <typename Datatype>
	void SimpleListIterator<Datatype>::isValid(void) {
		return (currentNode != 0);
	}

	template <typename Datatype>
	void SimpleListIterator<Datatype> SimpleListIterator<Datatype>::GetIterator(void) {

	}
};

