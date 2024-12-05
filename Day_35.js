//Given two arrays a and b write a function comp(a, b) (orcompSame(a, b)) 
//that checks whether the two arrays have the "same" elements, with the same 
//multiplicities (the multiplicity of a member is the number of times it appears). 
//"Same" means, here, that the elements in b are the elements in a squared, regardless of the order.

//(6KYU) Are they the "same"?

function comp(array1, array2){
    //your code here
     if (!array1 || !array2 || array1.length !== array2.length) return false;
    
    let arr1 = array1.sort((a,b) => a-b);
    let arr2 = array2.sort((a,b) => a-b);
    
  arr1 = arr1.map((number) => number *= number);
    return arr1.every((val, index) => val === arr2[index])
  }