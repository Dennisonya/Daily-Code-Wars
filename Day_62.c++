//You’re given the pointer to the head nodes of two linked lists. 
//Compare the data in the nodes of the linked lists to check 
//if they are equal. If all data attributes are equal and the 
//lists are the same length, return1 . Otherwise, return .0

//(6KYU) Compare list


#include <iostream>
using namespace std;

 SinglyLinkedListNode {
     int data;
    SinglyLinkedListNode* next;
  };

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

if(head1 == NULL && head2 == NULL){
    return true;
}else if(head1 == NULL || head2 == NULL){
    return false;
}else{
    return head1->data == head2->data && compare_lists(head1->next,head2->next);
}

}