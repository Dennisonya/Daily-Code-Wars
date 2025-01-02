//Delete the node at a given position in a linked list 
//and return a reference to the head node. The head is 
//at position 0. The list may be empty after you delete
//the node. In that case, return a null value.

//(7KYU) deleteNode
#include <iostream>
#include <cstdlib>
using namespace std;

SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};


SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
        if(position == 0){
            free(llist);
            return NULL;
        }
    int x = 1;
    SinglyLinkedListNode * temp;
    SinglyLinkedListNode * headerTemp = llist;
    while( x < position){
        headerTemp = headerTemp->next;
        x++;
    }
    temp = headerTemp->next;
    headerTemp->next = temp->next;
    free(temp);
    return llist;
}