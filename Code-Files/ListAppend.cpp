#include "ListAppend.h"

// Overwrite the ListAppend function from the ListAppend.h file.
void ListAppend(DoublyLinkedList *list, int value) {
  // Create a brand new Node, and assign it with inputed value.
  Node *newNode = new Node(value);

  // If the List is empty, assign the newNode as the Head and
  // the Tail.
  if (!list->head) {
    list->head = list->tail = newNode;
  } else { // If the List is NOT empty.
    // Point the Tail's next pointer at the newNode.
    list->tail->next = newNode;
    // Point the newNode's previous pointer at the Tail.
    newNode->prev = list->tail;
    // Assign the newNode as the Tail of the List.
    list->tail = newNode;
  }
}
