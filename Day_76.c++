//Given an array of integers arr[] representing a permutation, 
//implement the next permutation that rearranges the numbers 
//into the lexicographically next greater permutation. 
//If no such permutation exists, rearrange the numbers into 
//the lowest possible order (i.e., sorted in ascending order). 

//(5KYU) Next Permutation
#include <its/stdc++.h>

 void nextPermutation(vector<int>& arr) {
        // code here
        int pivot = -1;
        int n = arr.size();
        
        for(int i = n-2; i>=0; i--){
            if(arr[i]<arr[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            reverse(arr.begin(), arr.end());
            return;
        }
        
        for(int i = n-1; i>pivot; i--){
            if(arr[i] > arr[pivot]){
                swap(arr[i],arr[pivot]);
                break;
            }
        }
        reverse(arr.begin() + pivot + 1, arr.end());
    }