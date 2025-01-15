//A linked list is said to contain a cycle 
//if any node is visited more than once 
//while traversing the list. Given a pointer
// to the head of a linked list, determine 
//if it contains a cycle. If it does, return1 
//. Otherwise, return 0.

#include <iostream>
#include <cstdlib>
using namespace std;

 SinglyLinkedListNode {
     int data;
    SinglyLinkedListNode* next;
  };

  bool has_cycle(SinglyLinkedListNode* head) {
    
     if (!head || !head->next) {
        return false;
    }
    
    SinglyLinkedListNode * fast = head;
    SinglyLinkedListNode * slow = head;
    
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(fast == slow){
         return true;
        }
        
    }
    
    
return false;
}
