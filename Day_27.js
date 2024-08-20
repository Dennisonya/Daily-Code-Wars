/*An isogram is a word that has no repeating letters, 
consecutive or non-consecutive. 
Implement a function that determines whether a string that contains only letters is an isogram. 
Assume the empty string is an isogram. Ignore letter case.*/

//(7KYU) Isograms

function isIsogram(str){
    if(str === "") return true // An empty string is considered an isogram
      
        let word = str.toLowerCase()
        let seen = new Set();
        let repeating = new Set();
          
        for(char of word){
          if(seen.has(char)){
              return false;  // Return false as soon as a repeating character is found
          }
           seen.add(char) 
          }
      
      return true;// If no repeating characters were found, return true
    }