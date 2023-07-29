#ifndef QUEUEADT_H
#define QUEUEADT_H

template <class T>
class QueueADT {
  virtual void initializeQueue() = 0;
  // function to initialize a queue. After constructing a queue, this
  // function should be called to set it to a default state,

  virtual bool isEmpty() = 0;
  // function that determines if the queue is empty or not. Should
  // return `true` if the queue has zero elements in it and `false`
  // otherwise.

  virtual bool isFull() = 0;
  // function that determines if the queue is full or not. Should return
  // `true` if no more elements can be added to the queue and `false`
  // otherwise.

  virtual T firstElement() = 0;
  // function that returns the first element in the queue. It does not
  // consume the element from the queue (i.e., the state of the queue
  // should be the same after calling this function).

  virtual T lastElement() = 0;
  // function that returns the last element in the queue. It does not
  // consume the element from the queue (i.e., the state of the queue
  // should be the same after calling this function).

  virtual void addElement(const T& newItem) = 0;
  // function that adds an element to the end of the queue. Note: this
  // function does not have to check whether elements can be added or
  // not, as we assume/check the queue is not full before calling this
  // function.

  virtual void deleteElement() = 0;
  // function that removes the first element from the queue. Note: this
  // function does not have to check that the queue is not empty, as we
  // assume/check that it's not empty before calling this function.

  virtual void print() = 0;
  // function that prints all of the elements of our queue to std::cout.
};

#endif
