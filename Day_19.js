//The goal of this exercise is to convert a string 
//to a new string where each character in the new string 
//is "(" if that character appears only once in the original string, 
//or ")" if that character appears more than once in the original string. 
//Ignore capitalization when determining if a character is a duplicate.

//(6kyu) Duplicate Encoder

function duplicateEncode(word){
    // ...
  let  words = word.toLowerCase()
  let wordsArray= words.split('')

    // Create an object to track the count of each character
  let charCount = {};
  
  // Count the occurrences of each character
  wordsArray.forEach(char => {
    charCount[char] = (charCount[char] || 0) + 1;
  });
  
  // Map the characters to '(' or ')' based on their count
  let encodedArray = wordsArray.map(char => {
    return charCount[char] > 1 ? ')' : '(';
  });
  
  // Join the array back into a string and return it
  return encodedArray.join('');
}
  