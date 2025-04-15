/*A split is called good if you can split s into two non-empty strings 
sleft and sright where their concatenation is equal to s (i.e., sleft + sright = s) 
and the number of distinct letters in sleft and sright is the same.
Return the number of good splits you can make in s.*/

//(1525). Number of Good Ways to Split a String

//First Approach
int numSplits(string s) {
    string sLeft;
    string sright;
    int goodSplits = 0;
       for(int i=0; i<s.length(); i++){
           for(int x = 0; x<= i; x++){
               sLeft += s[x];
           }
               for(int x = i+1; x<s.length(); x++){
                   sright += s[x];
               }
           map<char, int> sl;
           map<char, int> sr;
           for(int y=0; y<sLeft.length(); y++){
               sl[sLeft[y]]++;
           }
           for(int z= 0; z<sright.length(); z++){
               sr[sright[z]]++;
           }
       if(sl.size() == sr.size()){ 
           goodSplits++;
       }
   }
   return goodSplits;
   }

   //OPtimized Approach
   int numSplits(string s) {
    unordered_map<char, int> left, right;
    int goodSplits = 0;

    // Count all characters in right map initially
    for (char c : s) {
        right[c]++;
    }

    // Traverse and move characters from right to left map
    for (int i = 0; i < s.length() - 1; i++) {
        char c = s[i];
        left[c]++;
        right[c]--;

        if (right[c] == 0) {
            right.erase(c); // Clean up to keep map size accurate
        }

        if (left.size() == right.size()) {
            goodSplits++;
        }
    }

    return goodSplits;
}
