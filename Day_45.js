//Complete the method so that it formats the words into a 
// single comma separated value. The last word should be 
// separated by the word 'and' instead of a comma. 
// The method takes in an array of strings and returns 
// a single formatted string.

//Example...
//['ninja', 'samurai', 'ronin'] --> "ninja, samurai and ronin"
//['ninja', '', 'ronin'] --> "ninja and ronin"
//[] -->""

//(6KYU) Format words into a sentence
function formatWords(words){
    if (!words) {
        return "";
    }
    let wordArray = words.filter(word => word !== '');
  
    if(wordArray.length === 0){
    return ""
    }
    
    if(wordArray.length === 1){
      return wordArray[0];
    }

    const last = wordArray.pop();
    return `${wordArray.join(', ')} and ${last}`
}

