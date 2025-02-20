/*Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
*/

//(Easy) Contains Duplicate II

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int,int> map;

       for(int i= 0; i<nums.size(); i++){
           if(map.find(nums[i]) != map.end()){
               if(abs(i- map[nums[i]]) <= k){
                    return true;
               }
           }
           map[nums[i]] = i;
       }
    
    return false;
    }