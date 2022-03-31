#pragma once
/*
 C'est la même solution que celle utilisée pour casser les inclusions cycliques
 Mais en la déclarant en tant que classe template, ça règle
 aussi le problème de ce Jeudi après midi
 */
template<class T> class Stack;

#include <iostream>
template<class T>
class Node
{
private:
	T value;
	Node* next;
public:
	friend class Stack<T>;
	Node(T);
	void display(void) const;
};

template <class T>
Node<T>::Node(T val)
{
	this->value = val;
}

template<class T>
inline void Node<T>::display(void) const
{
	std::cout << "[" << this->value << "]" << std::endl;
}

