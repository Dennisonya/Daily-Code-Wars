//Create a function named "rotate" that takes an array 
// and returns a new one with the elements inside rotated n spaces.
//If n is greater than 0 it should rotate the array to the right. 
// If n is less than 0 it should rotate the array to the left. If n 
// is 0, then it should return the array unchanged.

//(6KYU) Rotate Array

function rotate(array,n){
    // ...
    let length = array.length;
    if(length === 0 || n ===0) return array.slice()
    n = n %length;
    if(n<0)  n+= length;
    
    return array.slice(-n).concat(array.slice(0,-n));
  }

  //Input: String which consists of two positive numbers (doubles)
  //  and exactly one operator like +, -, * or / always between
  //  these numbers. The string is dirty, which means that there
  //  are different characters inside too, not only numbers and
  //  the operator. You have to combine all digits left and right, 
  // perhaps with "." inside (doubles), and to calculate the result 
  // which has to be rounded to an integer and converted to a string at the end.

  //(6KYU) Basics 03: Strings, Numbers and Calculation

  function calculateString(st){
    //..
      const validCharacters = st.split('').filter(x => !isNaN(x) || "+-*/.".includes(x));
     const sanitizedString = validCharacters.join('');
      try {
        const result = eval(sanitizedString);
        return Math.floor(result).toString(); 
    } catch (error) {
        return "Error";
      }
  
}
