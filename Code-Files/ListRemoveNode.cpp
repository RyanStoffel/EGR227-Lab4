#include "ListRemoveNode.h"
#include "DoublyLinkedList.h"

// Overwrite the ListRemoveNode function from the ListRemoveNode.h file.
void ListRemoveNode(DoublyLinkedList *list, Node *postToRemove) {
  // If the given Node is not in the List, return nothing.
  if (!postToRemove)
    return;

  // If the given Node's previous pointer points to another Node.
  if (postToRemove->prev) {
    // The Node behind the given Node, will have it's next pointer point to the
    // Node AFTER the given Node.
    postToRemove->prev->next = postToRemove->next;
  } else { // If the given Node's previous pointer points to nullptr.
    // Assign the List's Head as the Node AFTER the given Node.
    list->head = postToRemove->next;
  }

  // If the given Node's next pointer points to another Node.
  if (postToRemove->next) {
    // The Node in front of the given Node, will have it's previous pointer
    // point to the Node BEFORE the given Node.
    postToRemove->next->prev = postToRemove->prev;
  } else { // If the given Node's next pointer points to nullptr.
    // Assign the List's Tail as the Node BEFORE the given Node.
    list->tail = postToRemove->prev;
  }

  // Delete the given Node from memory.
  delete postToRemove;
}
