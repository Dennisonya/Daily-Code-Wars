//Given an unsorted array of integers, find the smallest number in the array, the largest number in the array, and the smallest number between the two array bounds that is not in the array.
//(7KYU) MinMaxMin: Bounded Nums

function minMinMax(array) {
    // solution goes here!
    array.sort((a,b) => a-b)
    let min = array[0]
    let middle 
    let max = array[array.length-1]
    for(let i = min; i<max; i++){
      if(!array.includes(i)){
          middle =i;
        break;
      }
    }  
    return [min,middle,max]
  }