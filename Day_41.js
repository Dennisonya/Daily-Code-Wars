//The main idea is to count all the occurring characters in a string. 
//If you have a string like aba, then the result should be {'a': 2, 'b': 1}.

//What if the string is empty? Then the result should be empty object literal, {}.

//(6KYU) Count characters in your string 

function count(string) {
    // TODO
    let freqMap = {};
        for (let char of string) {
            freqMap[char] = (freqMap[char] || 0) + 1;
        }
    return string.length === 0 ? {} : freqMap;
  }

  //Take an array and remove every second element from the array. 
  //Always keep the first element and start removing with the next element.
  //(8KYU) Removing Elements

  function removeEveryOther(arr){

    return arr.filter((_,index) => index % 2 === 0);
  }