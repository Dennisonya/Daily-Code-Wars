//Write an algorithm that takes an array and moves all of the zeros to the end
// preserving the order of the other elements.

function moveZeros(arr) {
    let filteredArray = arr.filter(element => element !== 0);//filters all the 0's from the array
  
  let zeroCount = 0
  arr.forEach((x) => {
      if(x === 0){
          zeroCount++//counts the number of zeros in the original array
      }
  })
  for(let i =0; i<zeroCount; i++){
    //Appends the same number of 0s at the end of the filtered array
      filteredArray.push(0)
  }
    return filteredArray
  }