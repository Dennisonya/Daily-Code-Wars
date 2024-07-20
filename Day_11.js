//Your task is to create an array of size n with 
//the values of the Fibonnaci sequence, and 
//reverse the order in which the sequence is 
//displayed.
//For example: [1, 1, 2, 3, 5] would become [5, //3, 2, 1, 1]
//You can assume that n will always be a 
//positive integer between and including, 1 
//and 64.
// 7kyu The iccanobiF Sequence

function iccanobif(n) {
    if (n <= 0) return [];
  
    let array = new Array(n).fill(0); 
  
    array[0] = 1;
    if (n > 1) {
      array[1] = 1;
    }
  
    for (let i = 2; i < n; i++) {
      array[i] = array[i - 1] + array[i - 2];
    }
     return array.reverse()
  }