//You will be given an array of numbers.
// You have to sort the odd numbers in ascending 
//order while leaving the even numbers at their original positions.

//(6KYU) Sort the odd

function sortArray(array) {
    // Return a sorted array
    let arr = [...array]
    
    let divisibleBy3 = arr.filter(num => num%2 !== 0).sort((a,b) => a-b);

    let oddIndex = 0;
    
    return arr.map(num =>(num%2 !==0 ? divisibleBy3[oddIndex++]: num));
  }