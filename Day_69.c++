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

//Given pointers to the head nodes of  linked lists that
// merge together at some point, find the node where the 
//two lists merge. The merge point is where both lists 
//point to the same node, i.e. they reference the same
// memory location. It is guaranteed that the two head 
//nodes will be different, and neither will be NULL. If 
//the lists share a common node, return that node's  value.

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode * temp1 = head1;
    SinglyLinkedListNode * temp2 = head2;
    unordered_set<SinglyLinkedListNode*>st1;

    
        while(temp1 != NULL){
            st1.insert(temp1);
            temp1 = temp1->next;
        }
        
        while(temp2 != NULL){
            if(st1.find(temp2) != st1.end()){
                return temp2->data;
            }
            temp2= temp2->next;
        }
   
    return -1;
}