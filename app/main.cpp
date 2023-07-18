#include <iostream>
#include <map>
#include <vector>
#include <string>

#include <sstream>
#include <stdexcept>
#include <stack>
#include <queue>

#include "basic.h"

void example();
void example_2();
void example_3();
void example_4();



int main() 
{ 
    example_4();
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

void example_3()
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
    
    breadthFirst(a);
}

void example_4()
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
    
    std::cout << "f value exist in node " << nodeExist(a, 'f') << std::endl;
    std::cout << "j value exist in node " << nodeExist(a, 'j') << std::endl;
}

