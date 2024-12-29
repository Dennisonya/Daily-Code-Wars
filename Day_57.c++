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

//You are given the pointer to the head node 
//of a linked list and an integer to add to the
// list. Create a new node with the given integer. 
//Insert this node at the tail of the linked list 
//and return the head node of the linked list formed 
//after inserting this new node. The given head pointer
// may be null, meaning that the initial list is empty.

//(7KYU) insertNodeAtTail


SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode *temp= new SinglyLinkedListNode(data);
    temp->next = NULL;
    SinglyLinkedListNode *headerTemp= head;

    if (head == NULL) {
        return temp;
    }

    while(headerTemp->next != NULL){
        headerTemp = headerTemp->next;
    }
    headerTemp->next = temp;
    return head;
}
