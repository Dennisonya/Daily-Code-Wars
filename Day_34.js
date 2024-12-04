//Write a program that outputs the top n elements from a list.
//(7kyu)Largest Elements

function largest(n, array) {
    let arr = [...array.sort((a, b) => a - b)];
  
  return n != 0 ? arr.slice(-n) : [];
    
  }