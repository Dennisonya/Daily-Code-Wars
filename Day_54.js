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