//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 vector<int> majorityElement(vector<int>& nums) {
        map<int, int> freq;
        vector<int>result;
        int x = nums.size()/3;

        for(int i =0; i<nums.size(); i++){
            freq[nums[i]]++;
        }

        for(auto num :freq){
            if(num.second > x){
                result.push_back(num.first);
            }
        }
        return result;
    }

//Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
//Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
//Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
//Return k.

 int removeDuplicates(vector<int>& nums) {
        int index = 1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }