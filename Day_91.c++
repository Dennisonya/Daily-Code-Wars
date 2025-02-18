/*Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can
be replaced to get t.
All occurrences of a character must be replaced with another
character while preserving the order of characters. No two 
characters may map to the same character, but a character may 
map to itself.*/

//(6kyU) Isomorphic Strings


bool isIsomorphic(string s, string t) {
    if(s.length() != t.length()){
        return false;
    }
    unordered_map<char, char> map; 
    unordered_set<char> mapped_value;
    for(int i =0; i<s.length(); i++){
        char s_char = s[i];
        char t_char = t[i];

        if(map.count(s_char)){
            if(map[s_char] != t_char) return false; // return false if the current s character has already been mapped
        }else{
            if(mapped_value.count(t_char)) return false; //return false if the t character has already been mapped  
            
            map[s_char] = t_char;
            mapped_value.insert(t_char);

        }
    }

    return true;
}
