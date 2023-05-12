#pragma once

template <class Datatype>

class LinkedStack
{
public: 
	void Push(Datatype);
	void Pop(void);
	void Top(void);
};

template <typename Datatype>
void LinkedStack<Datatype>::Push(Datatype p_data) {
	Preprend(p_data);
}

template <typename Datatype>
void LinkedStack<Datatype>::Pop(void) {
	//Tarea
}

template <typename Datatype>
void LinkedStack<Datatype>::Top(void) {
	return tail->data;
}

