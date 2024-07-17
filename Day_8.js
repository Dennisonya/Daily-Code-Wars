//Write a function called 
//sortGiftCode/sort_gift_code/SortGiftCode 
//that accepts a string containing up to 26 
//unique alphabetical characters, and returns
 //a string containing the same characters in 
 //alphabetical order.
//(7kyu) Sort the gift Code

function sortGiftCode(code){
  
//splits the code into an array of chars and rearranging them in alphabetical order
    let array= code.split('').sort()
    return array.join('')//returns the array back into string format
  }