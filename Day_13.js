//In this kata the aim is to compare each pair 
//of integers from two arrays, and return a 
//new array of large numbers.
//Note: Both arrays have the same dimensions.
//(7kyu) NUmberPairs

function getLargerNumbers(a, b) {
  const array1 = a
  const array2 = b
  const largeNumbers = []
  for(let i =0; i<array1.length; i++){
    if(array1[i] > array2[i]){
        largeNumbers.push(array1[i])
    }else if(array1[i] < array2[i]){
      largeNumbers.push(array2[i])
    }else{
      largeNumbers.push(array1[i])
    }
  }
}