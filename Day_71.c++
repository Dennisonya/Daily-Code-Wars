//Inrtion of node in s sorted double linked list

//(7KYU) sortedInsert
#include <iostream>

DoublyLinkedListNode {
     int data;
     DoublyLinkedListNode* next;
     DoublyLinkedListNode* prev;
};
 

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    DoublyLinkedListNode * temp =  new DoublyLinkedListNode(data);
    DoublyLinkedListNode * headerTemp = llist;
    
        if(llist == NULL){
            return temp;
        }
        if(data < headerTemp->data){
            temp->next = headerTemp;
            headerTemp->prev = temp;
            return temp;
        }
    
    while(headerTemp->next != NULL && headerTemp->next->data < data){
            headerTemp = headerTemp->next;
    }
     
     temp->next = headerTemp->next;
     
     if(headerTemp->next != NULL){
        headerTemp->next->prev= temp;
     }
     headerTemp->next = temp;
     temp->prev = headerTemp;

return llist;
}
