#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

// Create the Node class.
class Node {
public:
  int data;   // The data value of the Node.
  Node *next; // A pointer that points to the NEXT Node.
  Node *prev; // A pointer that points to the PREVIOUS Node.

  // Create and Initialize the Node Constructor.
  Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

// Create the DoublyLinkedList Class.
class DoublyLinkedList {
public:
  Node *head; // The first Node of the list.
  Node *tail; // The last Node of the list.

  // Create a Constructor for the DoublyLinkedList Class.
  DoublyLinkedList();
  // Create a function displayForward, but do not define.
  void displayForward();
};

#endif
