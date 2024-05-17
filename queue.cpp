#include "queue.h"
#include <iostream>

using namespace std;

template <class T> Queue<T>::Queue() {
  head = nullptr;
  last = nullptr;
  size = 0;
}

template <class T> Queue<T>::~Queue() {
  Node *ptr = head;
  while (ptr != nullptr) {
    Node *tmp = ptr->next;
    delete ptr;
    ptr = tmp;
  }
  head = nullptr;
  size = 0;
}
template <class T> void Queue<T>::push(const T &e) {
  if (size != 0) {
    last->next = new Node;
    last->next->data = e;
    last->next->next = NULL;
    last = last->next;
  } else {
    head = last = new Node;
    head->data = e;
  }

  size++;
}

template <class T> bool Queue<T>::pop(T &t) {

  if (size == 0) {
    cerr << "the list is empty" << endl;
    return 0;
  } else {
    Node *p = head;
    t = head->data;
    head = head->next;
    delete p;
    size--;
  }
  return 1;
}

template <class T> bool Queue<T>::isEmpty() const { return size == 0; }

template <class T> void Queue<T>::print() const {
  if (size == 0) {
    cout << "the list is emepty." << endl;
    return;
  }
  Node *ptr = head;
  cout << "Printing Data" << endl;
  while (ptr != nullptr) {
    cout << ptr->data << endl;
    ptr = ptr->next;
  }
}

template class Queue<int>;
template class Queue<float>;
