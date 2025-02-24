/*Given an array of strings strs, group the anagrams together. You can return the answer in any order.*/

 //Difficulty Level: Medium
 //Group Anagrams

 vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>>map;

    for(string s : strs){
        string sortedWord = s;
        sort(sortedWord.begin(), sortedWord.end());
        map[sortedWord].push_back(s);
    }

    vector<vector<string>> result;
    for(auto &pair : map){
        result.push_back(pair.second);
    }

    return result;
}