//You are given the pointer to the head node 
//of a sorted linked list, where the data in 
//the nodes is in ascending order. Delete 
//nodes and return a sorted list with each 
//distinct value in the original list. The 
//given head pointer may be null indicating that the list is empty.

//(6KYU) RemoveDuplicate

#include <iostream>
#include <cstdlib>
using namespace std;

 SinglyLinkedListNode {
     int data;
    SinglyLinkedListNode* next;
  };


SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {

    SinglyLinkedListNode *temp = llist;
    SinglyLinkedListNode *duplicate = NULL;
    
        while(temp->next != NULL){
            if(temp->data == temp->next->data){
                duplicate = temp->next;
                temp->next = duplicate->next;
                duplicate->next = NULL;
                free(duplicate);
            }else{
                temp = temp->next;
            }
        }
    return llist;
}
