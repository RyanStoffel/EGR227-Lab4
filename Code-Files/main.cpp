#include "DoublyLinkedList.h"
#include "ListAppend.h"
#include "ListInsertNodeAfter.h"
#include "ListPrepend.h"
#include "ListRemoveNode.h"
#include "ListSearch.h"
#include <iostream>

using namespace std;

int main() {
  // Step 1: Create an empty doubly linked list representing a social media feed
  DoublyLinkedList socialMediaFeed;

  cout << "Social Media Feed Simulation" << endl;

  // Step 2: Users post updates (append new posts to the feed)
  cout << "\nUsers posting updates...\n";
  ListAppend(&socialMediaFeed, 101); // Post ID 101
  ListAppend(&socialMediaFeed, 102); // Post ID 102
  ListAppend(&socialMediaFeed, 103); // Post ID 103

  // Step 3: Display the social media feed
  cout << "Current Feed (Newest at End): ";
  socialMediaFeed.displayForward();

  // Step 4: A user pins an important post to the top (Prepend operation)
  cout << "\nPinning Post 200 to the top...\n";
  ListPrepend(&socialMediaFeed, 200);

  // Step 5: Display the updated feed
  cout << "Updated Feed (Newest at End): ";
  socialMediaFeed.displayForward();

  // Step 6: Search for a specific post (e.g., Post ID 102)
  int searchPostID = 102;
  Node *foundPost = ListSearch(&socialMediaFeed, searchPostID);
  if (foundPost) {
    cout << "Post ID " << searchPostID << " found in the feed!\n";
  } else {
    cout << "Post ID " << searchPostID << " not found.\n";
  }

  // Step 7: A user comments on Post ID 102 (Insert after operation)
  cout << "\nInserting a comment (Post ID 202) after Post ID 102...\n";
  if (foundPost) {
    ListInsertNodeAfter(&socialMediaFeed, foundPost, 202);
  }

  // Step 8: Display the updated feed after commenting
  cout << "Feed after Commenting: ";
  socialMediaFeed.displayForward();

  // Step 9: A user deletes their post (Remove operation)
  int removePostID = 103;
  Node *postToRemove = ListSearch(&socialMediaFeed, removePostID);
  if (postToRemove) {
    cout << "\nRemoving Post ID " << removePostID << " from the feed...\n";
    ListRemoveNode(&socialMediaFeed, postToRemove);
  } else {
    cout << "Post ID " << removePostID << " not found. Cannot remove.\n";
  }

  // Step 10: Display the final feed
  cout << "Final Feed: ";
  socialMediaFeed.displayForward();

  cout << "\nSocial Media Feed Simulation Complete!\n";

  return 0;
}
