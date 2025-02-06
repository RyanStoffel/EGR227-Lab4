#include "ListInsertNodeAfter.h"

// Overwrite the ListInsertNodeAfter function from the ListInsertNodeAfter.h
// file.
void ListInsertNodeAfter(DoublyLinkedList *list, Node *afterNode, int value) {
  // Create a brand new Node and assign it with the inputed value.
  Node *newNode = new Node(value);

  // Create a temporary Node called currentNode and assign it with the
  // List's Head Node.
  Node *currentNode = list->head;

  // While the currentNode is NOT null, execute the code in the loop.
  while (currentNode) {
    // Create another temporary Node called succesorNode and assign it
    // with the Node AFTER currentNode.
    Node *succesorNode = currentNode->next;

    // If the currentNode's data matches the given afterNode's data,
    // execute the code inside the IF statement.
    if (currentNode->data == afterNode->data) {
      // Assign currentNode's next pointer with the newNode.
      currentNode->next = newNode;
      // Assign the succesorNode's previous pointer with the newNode.
      succesorNode->prev = newNode;
      // Assign the newNode's next pointer to the succesorNode;
      newNode->next = succesorNode;
    }

    // Assign currentNode with the NEXT Node in the list.
    currentNode = currentNode->next;
  }
}
