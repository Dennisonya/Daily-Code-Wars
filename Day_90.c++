/*Given an array of integers nums, return the number of good pairs.
A pair (i, j) is called good if nums[i] == nums[j] and i < j.
*/
 
 // (6KYU) Number of Good Pairs

int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int , int> freq;
        int count = 0;
        for(int i =0; i<nums.size(); i++){
            count += freq[nums[i]];
            freq[nums[i]]++;
        }
        return count;
    }

/*Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.*/

//Ransom Note (easy)

bool canConstruct(string ransomNote, string magazine) {
    if(ransomNote.length() > magazine.length()) return false;

    unordered_map<char,int> freq;
    int count= 0;
    
    for(char ch : magazine){
        freq[ch]++;
    }

    for(char ch : ransomNote){
       if(freq[ch] == 0) return false;
       freq[ch]--;
    }

    return true;
}