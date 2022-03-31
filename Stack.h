#pragma once
#include <iostream>
#include "Node.h"
template<class T> 
class Stack
{
private:
	Node<T>* top;
	int length;
public:
	Stack();
	bool is_empty(void) const;
	void push_stack(Node<T>*);
	void push_stack(T);
	Node<T>* pop_stack(void);
	void display(void) const;
	~Stack();

	
};

template<class T>
inline Stack<T>::Stack()
{
	this->top = nullptr;
	this->length = 0;
}

template<class T>
inline bool Stack<T>::is_empty(void) const
{
	return this->length == 0;
}

template<class T>
inline void Stack<T>::push_stack(Node<T>* cell)
{
	cell->next = this->top;
	this->top = cell;
	this->length++;
}

template<class T>
inline void Stack<T>::push_stack(T val)
{
	Node<T>* cell = new Node<T>(val);
	this->push_stack(cell);
}

template<class T>
inline Node<T>* Stack<T>::pop_stack(void)
{
	if(!this->is_empty())
	{
		Node<T>* tmp = this->top;
		this->top = this->top->next;
		this->length--;

		return tmp;

	}
	return nullptr;
}

template<class T>
inline void Stack<T>::display(void) const
{
	if(!this->is_empty())
	{
		Node<T>* tmp = this->top;

		while(tmp)
		{
			tmp->display();
			tmp = tmp->next;
		}
	}
}

template<class T>
inline Stack<T>::~Stack()
{
	Node<T>* tmp;

	while(!this->is_empty())
	{
		tmp = this->top;

		this->top = this->top->next;

		delete tmp;

		this->length--;
	}
}
