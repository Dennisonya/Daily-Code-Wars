//Given the pointer to the head node of a doubly linked list,
// reverse the order of the nodes in place. That is, change
// the next and prev pointers of the nodes so that the 
//direction of the list is reversed. Return a reference 
//to the head node of the reversed list.

//(6KYU) Reverse DLL
#include <bits/stdc++.h>
using namespace std;

DoublyLinkedListNode {
     int data;
     DoublyLinkedListNode* next;
     DoublyLinkedListNode* prev;
 };


DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    if(llist == NULL || llist->next == NULL){
        return llist;
    }
    
    DoublyLinkedListNode * temp = llist;
    DoublyLinkedListNode * prev = NULL;
     
    while(temp!= NULL){
        prev = temp->prev;
        
        temp->prev = temp->next;
        temp->next = prev;
        
        temp = temp->prev;
    }
    
    return prev->prev;
}
