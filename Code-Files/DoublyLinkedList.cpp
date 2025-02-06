#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

// Initializing the Constructor for the DoublyLinkedList.h File.
DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

// Overwriting the displayForward function from the DoublyLinkedList.h file
void DoublyLinkedList::displayForward() {
  if (!head) { // If the head is null, the list is empty.
    cout << "Feed is empty!" << endl;
  }
  // Create a new node that points to the head node of the list.
  Node *currentNode = head;

  // While the currentNode we created before is NOT null, execute the code in
  // the while loop.
  while (currentNode) {
    // Print the data of the currentNode.
    cout << currentNode->data << " ";

    // Assign currentNode with the next node in the list.
    currentNode = currentNode->next;
  }
  cout << endl;
}
