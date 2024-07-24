//Create a function that returns the sum of 
//the two lowest positive numbers given an 
//array of minimum 4 positive integers. No 
//floats or non-positive integers will be passed.
//For example, when an array is passed like 
//[19, 5, 42, 2, 77], the output should be 7
//(7kyu) Sum of two lowest positive integers

function sumTwoSmallestNumbers(numbers) {  
    //Code here
    // Sort the array numerically
    numbers.sort((a, b) => a - b);
    
    // Get the sum of the first two elements
    return numbers[0] + numbers[1];
  }