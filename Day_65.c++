//Given pointers to the heads of two sorted linked lists, 
//merge them into a single, sorted linked list. Either 
//head pointer may be null meaning that the corresponding list is empty.

//(6KYU) MergeLists

#include <iostream>
using namespace std;

 SinglyLinkedListNode {
     int data;
    SinglyLinkedListNode* next;
  };

  SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
        if (!head1) return head2;
    if (!head2) return head1;

    SinglyLinkedListNode* result = NULL;

    if (head1->data <= head2->data) {
        result = head1;
        result->next = mergeLists(head1->next, head2);
    } else {
        result = head2;
        result->next = mergeLists(head1, head2->next);
    }

    return result;
}
