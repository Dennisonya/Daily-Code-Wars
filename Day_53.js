//Given a list of integers, 
// determine whether the sum of its elements is odd or even.
//(7KYU) Odd or Even

function oddOrEven(array) {
    //enter code here
   let sum = array.reduce((acc,curr) => acc + curr, 0)
   return sum %2 ===0 ? "even" : "odd"
 }