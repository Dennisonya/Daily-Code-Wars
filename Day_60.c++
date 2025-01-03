//Given a pointer to the head of a singly-linked list, 
//print each  value from the reversed list. If the 
//given list is empty, do not print anything.

//(6KYU) reversePrint

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

void reversePrint(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode * temp = llist;
    vector<int>arr;
    if(temp == NULL){
        return;
    }else{

    while(temp!= NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
      reverse(arr.begin(), arr.end());
      
     for (int i : arr) {
        cout << i << endl;
    }
    }
}
