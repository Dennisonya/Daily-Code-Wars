//Linked list Reversal

//(6KYU) Linked list reversal

#include <iostream>
using namespace std;

 SinglyLinkedListNode {
     int data;
    SinglyLinkedListNode* next;
  };
 

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {

SinglyLinkedListNode *curr = llist, *next= NULL, *prev=NULL;
    while(curr != NULL){
    next = curr->next;
    curr->next = prev;
    
    prev = curr;
    curr= next;
    }
    return prev;
}
