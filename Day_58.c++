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

//Given the pointer to the head node of a linked list 
//and an integer to insert at a certain position, create a 
//new node with the given integer as its  attribute, insert
//this node at the desired position and return the head node.

//A position of 0 indicates head, a position of 1 indicates one node away from the head and so on. The head pointer given may be null meaning that the initial list is empty.

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode * temp = new SinglyLinkedListNode(data);
    
    if(position == 0){
        temp->next = llist;
        llist = temp;
        return temp;
    }
    
    SinglyLinkedListNode * headerTemp = llist;
    int i =1;
    
    while( i < position && headerTemp->next != NULL){
        headerTemp = headerTemp->next;
        i++;
    }
  temp->next = headerTemp->next;
  headerTemp->next = temp;
    return llist;
}