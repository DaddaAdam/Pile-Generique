// Pile-Generique.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "Stack.h"

int main()
{
    std::cout << "Hello World!\n";

    Node<int>* n1 = new Node<int>(1);
    Node<int>* n2 = new Node<int>(14);
    Node<int>* n3 = new Node<int>(7);

    Stack<int> s;
    s.push_stack(n1);
    s.push_stack(n2);
    s.push_stack(n3);
    s.push_stack(3);
    s.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
