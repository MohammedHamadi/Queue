#pragma once

template <class T> class Queue {
public:
  Queue();
  ~Queue();
  void push(const T &);
  bool pop(T &);
  bool isEmpty() const;
  void print() const;

private:
  class Node {
  public:
    T data;
    Node *next;

    Node(int d = 0) : data(d) {};
    Node(const Node *node) { data = node->data; };
  };
  Node *head;
  Node *last;
  int size;
};
