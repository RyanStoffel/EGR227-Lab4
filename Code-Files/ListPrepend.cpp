#include "ListPrepend.h"

// Overwrite the ListPrepend fucntion from the ListPrepend.h file.
void ListPrepend(DoublyLinkedList *list, int value) {
  // Create a brand new Node and assign it with the inputed value.
  Node *newNode = new Node(value);

  // Checks to see if the List is empty.
  if (!list->head) {
    // If the List is empty, it assigns the List's Head and Tail with the
    // newNode.
    list->head = list->tail = newNode;
  } else { // If the list is NOT empty.
    // Assigns the Head's previous pointer to the newNode;
    list->head->prev = newNode;
    // Assigns the newNode's pointer to the List's Head.
    newNode->next = list->head;
    // Assigns the List's Head with the newNode.
    list->head = newNode;
  }
}
