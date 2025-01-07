//Given a pointer to the head of a linked list 
//and a specific position, determine the data 
//value at that position. Count backwards from the tail node. 
//The tail is at postion 0, its parent is at 1 and so on.

// (6KYU) GEtNODE
#include <iostream>
using namespace std;

 SinglyLinkedListNode {
     int data;
    SinglyLinkedListNode* next;
  };

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
SinglyLinkedListNode * temp = llist;
int length =0;
while(temp != NULL){
    temp= temp->next;
    length++;
}

int position = length - positionFromTail - 1;

temp = llist;
for (int i = 0; i<position; i++){
    temp = temp->next;
}

return temp->data;
}
