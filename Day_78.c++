//Given the pointer to the head node of a doubly linked list,
// reverse the order of the nodes in place. That is, change
// the next and prev pointers of the nodes so that the 
//direction of the list is reversed. Return a reference 
//to the head node of the reversed list.

//(6KYU) Reverse DLL
#include <bits/stdc++.h>
using namespace std;

DoublyLinkedListNode {
     int data;
     DoublyLinkedListNode* next;
     DoublyLinkedListNode* prev;
 };


DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    if(llist == NULL || llist->next == NULL){
        return llist;
    }
    
    DoublyLinkedListNode * temp = llist;
    DoublyLinkedListNode * prev = NULL;
     
    while(temp!= NULL){
        prev = temp->prev;
        
        temp->prev = temp->next;
        temp->next = prev;
        
        temp = temp->prev;
    }
    
    return prev->prev;
}

//The cost of stock on each day is given in an array price[]. Each day you may decide to either buy or sell the stock i at price[i], you can even buy and sell the stock on the same day. Find the maximum profit that you can get.

//Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.
//(6KYU) MaximumProfit

   int maximumProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
        int profit=0;
        
        for(int i=1; i<n; i++){
            if(prices[i] > prices[i-1]){
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
        
    }