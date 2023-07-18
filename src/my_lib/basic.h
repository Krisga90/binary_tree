#ifndef BASIC_H
#define BASIC_H

#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <vector>
#include <stack>


template <class T>
class Node
{
public:
  Node(T value):m_value(value), m_left(nullptr), m_right(nullptr)
  {
  }

// private:
  T m_value;
  Node<T>* m_left;
  Node<T>* m_right;
};

template <class T>
void depthFirstRecursive(const Node<T> & trunk);

template <class T>
void depthFirst(const Node<T> & trunk);




template <class T>
void depthFirstRecursive(const Node<T> & trunk)
{
    std::cout << trunk.m_value << "\n";

    if(trunk.m_left)
    {
        depthFirstRecursive(*trunk.m_left);
    }
    if(trunk.m_right)
    {
        depthFirstRecursive(*trunk.m_right);
    }
}

template <class T>
void depthFirst(const Node<T> & trunk)
{
    std::stack<Node<T>> stack;
    stack.push(trunk);
    while(stack.size())
    {
        Node<T> current = stack.top();
        stack.pop();
        std::cout << current.m_value << "\n";

        if( current.m_right)
        {
            stack.push(*current.m_right);
        }

        if( current.m_left)
        {
            stack.push(*current.m_left);
        }
    }
}


#endif // BASIC_H