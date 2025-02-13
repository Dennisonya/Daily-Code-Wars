/*Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

You can use each character in text at most once. Return the maximum number of instances that can be formed.*/

//(6KYU) 

 int maxNumberOfBalloons(string text) {
        unordered_map<char, int> map;
        // Count the occurrences of characters in text
         for(char word : text){
                map[word]++;
    }
     // "balloon" consists of:
    // 'b' -> 1 time, 'a' -> 1 time, 'l' -> 2 times, 'o' -> 2 times, 'n' -> 1 time
     return min({map['b'],map['a'],map['l']/2,map['o']/2, map['n']});
    }