//Given a pointer to the head of a linked list, 
//insert a new node before the head. 

//(7KYU)

#include <iostream>
#include <cstdlib>
using namespace std;

SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
    if(llist == NULL){
        temp->next = NULL;
          llist = temp;
        return llist;
    }

    temp->next = llist;
    llist = temp;
    return llist;
}