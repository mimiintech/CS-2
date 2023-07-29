#ifndef QUEUELL_H
#define QUEUELL_H

#include <iostream>
#include <string>
#include "linkedList.h"
#include "queueADT.h"

template <class T>
class QueueLL: public QueueADT<T> {
private:
  LinkedList<T> myLL;
public:
  void initializeQueue();
  // implement pure virtual function
  // hint: you don't have to have the function do anything, it just
  // needs to be defined!

  bool isEmpty();
  // hint: this function should be related to a member variable of myLL

  bool isFull();
  // hint: our linked list is never full, because we can always add
  // another element!

  T firstElement();
  // hint: this should be related to a member variable of myLL

  T lastElement();
  // hint: this should be related to a member variable of myLL

  void addElement(const T& newItem);
  // hint: this should be related to a member function of myLL

  void deleteElement();
  // hint: this should be related to a member function of myLL

  void print();
  // hint: this should be related to a member function of myLL

  // destructor
  ~QueueLL();
  // hint: this should be related to a member function of myLL

  const QueueLL<T>& operator=(const QueueLL<T>& otherQueue);
  // overloaded assignment operator
  // hint: this should be related to a member function of myLL

  QueueLL(QueueLL<T>& otherQueue);
  // copy constructor
  // hint: this should be related to a member function of myLL

  QueueLL();
  // default constructor
  // this can do nothing, it just needs to be defined!
};

// ADD YOUR FUNCTIONS HERE
// the first one is free!

template <class T>
QueueLL<T>::initializeQueue() {
  // don't do anything
}

#endif
