//Given a string, remove any characters that //are unique from the string.
//Example:
//input: "abccdefee"
//output: "cceee"
//6kyu (only Duplicates)

function onlyDuplicates(str) {
    // your code here
    let array = str.split('')
    let repeating = []
      for(let i =0; i<array.length; i++){
        let count =0;
          for(let j = 0; j<array.length; j++){
            if(array[i]===array[j]){
              count++
            }
          }
        if(count >= 2){
          repeating.push(array[i])
        }
      }
    let string = repeating.join('')
    return string
  }