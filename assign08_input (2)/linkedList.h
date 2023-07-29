#ifndef LINKEDLIST_H
#define LINKEDLIST_H

// create node class for linked lists
template <class T>
class NodeType {
public:
  // `info` is the data in the node, and is a template
  T info;
  // `link` is a pointer to the next node in the linked list
  NodeType *link;
};

// class prototype using a template
template <class T>
class LinkedList {
public:
  // member variables

  NodeType<T> *head, *tail;
  // `head` is a pointer to the first node of the linked list
  // `tail` is a pointer to the last node of the linked list
  // note that they can point to the same node if there's only one node

  int count;
  // `count` keeps track of how many elements we have in the linked list

  // member functions

  LinkedList();
  // default constructor

  bool isEmpty();
  // function that determines whether the linked list os empty or not

  int listLength();
  // function that returns how many elements are in the list

  void destroyList();
  // function that `delete`s all of the nodes in the list
  // hint: this can be useful for the destructor of queueLL!

  T firstNodeInfo();
  // function that returns the `info` of the first node of the list
  // note: the list should NOT be changed, we should just get the first
  // element

  T lastNodeInfo();
  // function that returns the `info` of the last node of the list
  // note: the list should NOT be changed, we should just get the last
  // element

  void insertNodeAtEnd(T info);
  // function that adds a new node to the end of the list
  // note: inside of this function, you should make a `new` NodeType,
  // add the `info` passed into the function to the `info` of the node,
  // and then adjust the pointers appropriately.
  // hint: this function can be useful for the QueueLL.addElement
  // function

  void deleteFirstNode();
  // function that deletes a node from the beginning of the linked list.
  // note: you should `delete` the node at the beginning of the list to
  // make sure that you're not leaking memory, but need to update links
  // and pointers appropriately before doing so to avoid breaking the
  // list
  // hint: this function can be useful for the QueueLL.deleteElement
  // function

  void print();
  // function that prints the elements of the linked list.
  // hint: this function can be useful for the QueueLL.print function

  void makeCopy(const LinkedList<T>& otherList);
  // function to create a deep copy of the linked list.
  // hint: your function should first delete any existing nodes on the
  // current object before potentially making copies of the new nodes.
  // note: if the other list is not empty, you need to copy the
  // information over node-by-node. This function is important for both
  // the overloaded assignment operator and the copy constructor in the
  // QueueLL class
};

// implement member functions
// you get the first one for free!

// default constructor of linked list
template <class T>
LinkedList<T>::LinkedList() {
  count = 0;
  head = nullptr;
  tail = nullptr;
}

// ADD YOUR CODE HERE


#endif
