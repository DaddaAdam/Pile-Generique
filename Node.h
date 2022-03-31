#pragma once
/*
 C'est la m�me solution que celle utilis�e pour casser les inclusions cycliques
 Mais en la d�clarant en tant que classe template, �a r�gle
 aussi le probl�me de ce Jeudi apr�s midi
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

