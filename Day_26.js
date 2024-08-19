/*Write a function that takes an array of numbers and returns the sum of the numbers. 
The numbers can be negative or non-integer. 
If the array does not contain any numbers then you should return 0.*/

//(8KYU) Sum Arrays 

function sum (numbers) {
    "use strict";
  return numbers.length !== 0 ? numbers.reduce((acc,curr)=> acc + curr,0) : 0
    
};