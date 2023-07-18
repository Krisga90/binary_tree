#include <iostream>
#include <map>
#include <string>
#include <vector>

#include <queue>
#include <sstream>
#include <stack>
#include <stdexcept>

#include "basic.h"

void example();
void example_2();
void example_3();
void example_4();
void example_5();
void example_6();
void example_7();

int main() {
  example_7();
  return 0;
}

void example() {
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

void example_2() {
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

void example_3() {
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

void example_4() {
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

  std::cout << std::boolalpha;
  std::cout << "f value exist in node " << nodeExist(a, 'f') << std::endl;
  std::cout << "j value exist in node " << nodeExist(a, 'j') << std::endl;
}

void example_5() {
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

  std::cout << "Sum of all tree nodes is " << treeSum(a) << std::endl;
}

void example_6() {
  Node<int> a(11);
  Node<int> b(2);
  Node<int> c(-3);
  Node<int> d(4);
  Node<int> e(5);
  Node<int> f(1);

  a.m_left = &b;
  a.m_right = &c;
  b.m_left = &d;
  b.m_right = &e;
  c.m_right = &f;

  std::cout << "Min value of all tree nodes is " << minValue(a) << std::endl;
}

void example_7()
{
      Node<int> a(3);
  Node<int> b(11);
  Node<int> c(4);
  Node<int> d(4);
  Node<int> e(-2);
  Node<int> f(1);

  a.m_left = &b;
  a.m_right = &c;
  b.m_left = &d;
  b.m_right = &e;
  c.m_right = &f;

  std::cout << "max root to leaf path sum tree is " << maxRootToLeafPathSum(a) << std::endl;
}
