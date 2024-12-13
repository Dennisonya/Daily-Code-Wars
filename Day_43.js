//Create a function that takes an integer as an argument and returns
//  "Even" for even numbers or "Odd" for odd numbers.
//(8KYU)Even or Odd
function evenOrOdd(number) {
    return number % 2 === 0 ? "Even" : "Odd";
  }


// Given an array (arr) as an argument complete the function countSmileys that should return the total number of smiling faces.

//Rules for a smiling face:

//Each smiley face must contain a valid pair of eyes. Eyes can be marked as : or ;
//A smiley face can have a nose but it does not have to. Valid characters for a nose are - or ~
//Every smiling face must have a smiling mouth that should be marked with either ) or D
//No additional characters are allowed except for those mentioned.

//Valid smiley face examples: :) :D ;-D :~)
//Invalid smiley faces: ;( :> :} :]

//(6KYU) Count the smiley faces!

//return the total number of smiling faces in the array
function countSmileys(arr) {
    let validSmiles = [':-)',':~)',':)',':D',':-D',':~D',';-)',';~)',';)',';D',';-D',';~D']
    return arr.filter(smile => validSmiles.includes((smile))).length;
  }