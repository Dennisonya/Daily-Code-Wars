//You are given a string of letters and an array of numbers.
//The numbers indicate positions of letters that must be removed, in order, 
//starting from the beginning of the array.
//After each removal the size of the string decreases (there is no empty space).
//Return the only letter left.

//(7KYU) Last Survivor

function lastSurvivor(letters, coords) {
    let char = letters.split('');
    for(let i = 0; i<coords.length; i++){
      char.splice(coords[i], 1);
    }
    return char.join('')
  }