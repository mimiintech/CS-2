/*
Name: Michelle_Silva, 5006988436, CS202 1003-2023, Assign 8
Description: Basic input/output
Input: User/keyboard variables
Output: Display outputting variables
*/


#ifndef QUEUELL_H
#define QUEUELL_H
#include <iostream>
#include <string>
#include "linkedList.h"
#include "queueADT.h"
#include "queueLL.h"
using namespace std;

// relates back to the linkedList.h functions!
// fix all main assertion errors

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
// **************************************
// **************************************
template <class T>
void QueueLL<T>::initializeQueue()
{
  // Don't do anything
}
// **************************************
// **************************************
template <class T>
bool QueueLL<T>::isEmpty()
{
  return myLL.isEmpty();
}
// **************************************
// **************************************
template <class T>
bool QueueLL<T>::isFull()
{
  return false;
}
// **************************************
// **************************************
template <class T>
T QueueLL<T>::firstElement()
{
  return myLL.firstNodeInfo();
}
// **************************************
// **************************************
template <class T>
T QueueLL<T>::lastElement()
{
  return myLL.lastNodeInfo();
}
// **************************************
// **************************************
template <class T>
void QueueLL<T>::addElement(const T &newItem)
{
  myLL.insertNodeAtEnd(newItem);
}
// **************************************
// **************************************
template <class T>
void QueueLL<T>::deleteElement()
{
  // no return type
  return myLL.deleteFirstNode();
}
// **************************************
// **************************************
// template <class T>
// void QueueLL<T>::print()
// {
//   // no return type
//   return myLL.print();
// }

template <class T>
void QueueLL<T>::print()
{
  myLL.print(); 
}

// **************************************
// **************************************
template <class T>
QueueLL<T>::~QueueLL()
{
  myLL.destroyList();
}
// **************************************
// **************************************
template <class T>
QueueLL<T>::QueueLL()
{
  // does nothing inside
}
// **************************************
// **************************************
// template <class T>
// QueueLL<T>::QueueLL(QueueLL<T> &otherQueue)
// {
//   myLL = otherQueue.myLL; 
// }
template <class T>
QueueLL<T>::QueueLL(QueueLL<T> &otherQueue)
{
  NodeType<T> *otherList = otherQueue.myLL.head;
  while (otherList != nullptr)
  {
    myLL.insertNodeAtEnd(otherList->info);
    otherList = otherList->link;
  }
}

// **************************************
// **************************************
#endif
