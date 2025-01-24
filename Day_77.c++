//You are given an array of integer arr[] where 
//each number represents a vote to a candidate. 
//Return the candidates that have votes greater 
//than one-third of the total votes, If there's 
//not a majority vote, return an empty array.

//(6KYU) Majority
#include <bits/stdc++.h>
using namespace std;

 vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int x = arr.size()/3;
       vector<int>result;
        map<int,int>freq;
        
        for(int num : arr){
           freq[num]++;
        }
        
        for(const auto& pair : freq){
            if(pair.second > x){
                result.push_back(pair.first);
            }
        }
        
        return result;
    }