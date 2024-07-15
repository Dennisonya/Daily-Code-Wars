//Write a function named first_non_repeating_letter† that takes a string input
//and returns the first character that is not repeated anywhere in the string.

//For example, if given the input 'stress'
//the function should return 't', since the letter t only occurs once in the string
// and occurs first in the string.

//As an added challenge, upper- and lowercase letters are considered the same character
//but the function should return the correct case for the initial letter
//For example, the input 'sTreSS' should return 'T'.

//If a string contains all repeating characters, it should return an empty string ("");

// 5kyu (First non-repeating character)

function firstNonRepeatingLetter(s) {
    // Convert the string to lowercase to handle case insensitivity
    let lowerWord = s.toLowerCase();
    
    // Create sets to keep track of seen and repeating characters
    let seen = new Set();
    let repeating = new Set();
  
    // Iterate over the string to populate the sets
    for (let i = 0; i < lowerWord.length; i++) {
      let char = lowerWord[i];
      if (seen.has(char)) {
        repeating.add(char);
      } else {
        seen.add(char);
      }
    }
    
    // Find the first non-repeating character in the original string
    for (let i = 0; i < s.length; i++) {
      let char = lowerWord[i];
      if (!repeating.has(char)) {
        return s[i]; // Return the character with the original case
      }
    }
  
    return ''; // If no non-repeating character is found, return an empty string
  }