/*Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.*/
//(6KYU) Two Sums

vector<int> twoSum(vector<int>& numbers, int target) {
        int i= 0;
        int j= numbers.size()-1;
     
        while(i<j){
            int answer = numbers[i] + numbers[j];
            if(answer == target){
               return {i+1, j+1};
            }
            else if(answer < target){
                i++;
            }
            else{ 
                j--; 
            }
        } 
        return {};
    }