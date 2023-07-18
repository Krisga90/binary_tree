#ifndef BASIC_H
#define BASIC_H

#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <stack>
#include <vector>

template <class T> class Node {
public:
  Node(T value) : m_value(value), m_left(nullptr), m_right(nullptr) {}

  // private:
  T m_value;
  Node<T> *m_left;
  Node<T> *m_right;
};

template <class T> void depthFirstRecursive(const Node<T> &trunk);

template <class T> void depthFirst(const Node<T> &trunk);

template <class T> void breadthFirst(const Node<T> &trunk);

template <class T> bool nodeExist(const Node<T> &trunk, T value_exist);

template <class T> int treeSum(const Node<T> &trunk);

template <class T> int minValue(const Node<T> &trunk);

template <class T> int maxRootToLeafPathSum(const Node<T> &trunk);

template <class T> void depthFirstRecursive(const Node<T> &trunk) {
  std::cout << trunk.m_value << "\n";

  if (trunk.m_left) {
    depthFirstRecursive(*trunk.m_left);
  }
  if (trunk.m_right) {
    depthFirstRecursive(*trunk.m_right);
  }
}

template <class T> void depthFirst(const Node<T> &trunk) {
  std::stack<Node<T>> stack;
  stack.push(trunk);
  while (stack.size()) {
    Node<T> current = stack.top();
    stack.pop();
    std::cout << current.m_value << "\n";

    if (current.m_right) {
      stack.push(*current.m_right);
    }

    if (current.m_left) {
      stack.push(*current.m_left);
    }
  }
}

template <class T> void breadthFirst(const Node<T> &trunk) {
  std::queue<Node<T>> queue;
  queue.push(trunk);
  while (queue.size()) {
    Node<T> current = queue.front();
    queue.pop();
    std::cout << current.m_value << "\n";
    if (current.m_left) {
      queue.push(*(current.m_left));
    }
    if (current.m_right) {
      queue.push(*(current.m_right));
    }
  }
}

template <class T> bool nodeExist(const Node<T> &trunk, T value_exist) {
  if (trunk.m_value == value_exist) {
    return true;
  }
  if (trunk.m_left) {
    if (nodeExist(*trunk.m_left, value_exist)) {
      return true;
    }
  }
  if (trunk.m_right) {
    if (nodeExist(*trunk.m_right, value_exist)) {
      return true;
    }
  }
  return false;
}

template <class T> int treeSum(const Node<T> &trunk) {
  T sum = trunk.m_value;

  if (trunk.m_left) {
    sum += treeSum(*trunk.m_left);
  }

  if (trunk.m_right) {
    sum += treeSum(*trunk.m_right);
  }
  return sum;
}

template <class T> int minValue(const Node<T> &trunk) {
  T min = trunk.m_value;
  T temp;
  if (trunk.m_left) {
    temp = minValue(*trunk.m_left);
    if (temp < min) {
      min = temp;
    }
  }

  if (trunk.m_right) {
    temp = minValue(*trunk.m_right);
    if (temp < min) {
      min = temp;
    }
  }
  return min;
}

template <class T> int maxRootToLeafPathSum(const Node<T> &trunk) {
  T l_path_sum = trunk.m_value;
  T r_path_sum = trunk.m_value;
  T temp;
  if (trunk.m_left) {
    l_path_sum += maxRootToLeafPathSum(*trunk.m_left);
    if (trunk.m_right == nullptr) {
      return l_path_sum;
    }
  }

  if (trunk.m_right) {
    r_path_sum += maxRootToLeafPathSum(*trunk.m_right);
    if (trunk.m_right == nullptr) {
      return r_path_sum;
    }
  }
  return r_path_sum > l_path_sum ? r_path_sum : l_path_sum;
}

#endif // BASIC_H