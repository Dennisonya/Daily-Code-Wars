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