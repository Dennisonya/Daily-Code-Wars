/*Your task is to sort a given string. 
Each word in the string will contain a single number. 
This number is the position the word should have in the result.
Note: Numbers can be from 1 to 9. So 1 will be the first word (not 0).
If the input string is empty, return an empty string. 
The words in the input String will only contain valid consecutive numbers.

                (6KYU) Your order, please*/

 function findNumberInString(str) {
    const match = str.match(/\d+/);  
    return match ? Number(match[0]) : null;
}// A function that returns the first number in a strng

function order(words){

let word2 = words.split(' ').filter((char) => char!= ' ')

let reorderedWords = new Array(word2.length);
// A new array to store the words in proper order
    for(let i=0; i<word2.length; i++){
    let index = findNumberInString(word2[i])
        if(index !== 'null'){
            reorderedWords[index-1] = word2[i]// Place the word at the correct position
        }
    }
    
 return reorderedWords.join(' ')// rejoins the words in the reorderedWords array
}