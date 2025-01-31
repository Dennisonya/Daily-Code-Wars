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