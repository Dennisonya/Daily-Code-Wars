/*
Given a string s and an array of strings words, return the number of words[i] that is a subsequence of s.

A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
*/ 

//Medium Number of Matching Subsequences

//First Approach
class Solution {
    public:
        bool isSubSequence(string &s, string &j){
            int i = 0;
            int k = 0;
            while (i<s.size() && k<j.size()){
                if(s[i] == j[k]){
                    i++;
                }
                k++;
            }
            return i == s.size();
        }
    
        int numMatchingSubseq(string s, vector<string>& words) {
            int count = 0;
    
            for(string word: words){
                if(isSubSequence(word, s)){
                    count++;
                }
            }
            return count;
        }
    };