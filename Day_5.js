// level (6kyu) Narcissitic numbers
//Your function to check if a number is a narcissistic number and return true or false
//153 => 1^3 + 5^3 +3^3 = 153 is a narcissistic number

function narcissistic(value) {
    // Convert the number to a string then splits it into an array of characters
    let array = value.toString().split('');
    
    // Calculate the sum of each digit raised to the power of the number of digits
    let sum = array.reduce((acc, digit) => {
      return acc + Math.pow(Number(digit), array.length);
    }, 0);
    
    // Check if the calculated sum equals the original number
    return sum === value; 
  }
  