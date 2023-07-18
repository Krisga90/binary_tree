#include <iostream>
#include <map>
#include <vector>
#include <string>

#include <sstream>
#include <stdexcept>
#include <stack>

#include "basic.h"

void example();
void example_2();




int main() 
{ 
    example();
    example_2();
    return 0; 
}


void example()
{
    Node<int> a(1);
    Node<int> b(2);
    Node<int> c(3);
    Node<int> d(4);
    Node<int> e(5);
    Node<int> f(6);

    a.m_left = &b;
    a.m_right = &c;
    b.m_left = &d;
    b.m_right = &e;
    c.m_right = &f;
    
    depthFirst(a);
}

void example_2()
{
    Node<char> a('a');
    Node<char> b('b');
    Node<char> c('c');
    Node<char> d('d');
    Node<char> e('e');
    Node<char> f('f');

    a.m_left = &b;
    a.m_right = &c;
    b.m_left = &d;
    b.m_right = &e;
    c.m_right = &f;
    
    depthFirst(a);
}

