//(level 6kyu Stop gninnipS My sdroW!)
//Write a function that takes in a string of 
//one or more words, and returns the same 
//string, but with all words that have five or 
//more letters reversed (Just like the name of //this Kata). Strings passed in will consist of 
//only letters and spaces. Spaces will be 
//included only when more than one word is present.

function spinWords(string){
    word = string
    word = word.split(' ')//converts the string into an array of words
   word = word.map((element) => {
        if(element.length >=5 ){
          //returns the reversed words that are greater than or equal to 5
            return element.split('').reverse().join('');
        }
            return element;
    })
    word = word.join(" ") //Turns the array back to a string
     return word
   }