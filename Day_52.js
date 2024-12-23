//The Stanton measure of an array is computed as follows: 
// count the number of occurences for value 1 in the array. 
// Let this count be n. The Stanton measure is the number of
// times that n appears in the array.

//(7KYU) Stanton measure

function stantonMeasure(a){
    let count = 0
    for(let i =0; i<a.length; i++){
    if(a[i] === 1){
      count++;    
    }
  }
    let count2=0;
    for(let i = 0; i<a.length; i++){
      if(a[i] === count){
        count2++;
      }
    }
    return count2
  }