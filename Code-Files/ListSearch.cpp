#include "ListSearch.h"
#include "DoublyLinkedList.h"

// Overwrite the Node function ListSearch from the ListSearch.h file.
Node *ListSearch(DoublyLinkedList *list, int value) {
  // Create a temporary Node called currentNode, and assign it with the List's
  // Head.
  Node *currentNode = list->head;

  // While the currentNode is NOT null, execute the code in the loop.
  while (currentNode) {
    // If the currentNode's data matches the given value.
    if (currentNode->data == value) {
      // Return the currentNode.
      return currentNode;
    }
    // Assign the currentNode with next Node in the List.
    currentNode = currentNode->next;
  }

  // Return 0 if the given value isn't in the List.
  return 0;
}
