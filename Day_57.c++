//This is an exercise to practice traversing a linked list.
// Given a pointer to the head node of a linked list, 
//print each node's  element, one per line. If the head 
//pointer is null (indicating the list is empty), there 
//is nothing to print.

//(7KYU) printLinkedList

#include <iostream>
using namespace std;

struct SinglyLinkedListNode {
    int data;
     SinglyLinkedListNode* next;
};


void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp= temp->next;
    }

}