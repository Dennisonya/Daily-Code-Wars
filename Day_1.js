//You have two arguments: string - a string of random letters(only lowercase) 
//and array - an array of strings(feelings). 
//Your task is to return how many specific feelings are in the array.
// for example string -> 'yliausoenvjw'
//array -> ['anger', 'awe', 'joy', 'love', 'grief']
// output -> '3 feelings.' // 'awe', 'joy', 'love'

function countFeelings(string, array) {
    let feelings = 0;
  
    //The createFrequencyMap function takes a string 
    //it returns an object where the keys are characters
    //the values are the counts of those characters in the string
  function createFrequencyMap(string) {
      let freqMap = {};
      for (let char of string) {
          freqMap[char] = (freqMap[char] || 0) + 1;
      }
      return freqMap;
    }
  
  // Create frequency map of the string 'str'
  let strFreqMap = createFrequencyMap(string);
  
  for (let word of array) {
      let wordFreqMap = createFrequencyMap(word);//For each word in the array, a frequency map is created.
      let canFormWord = true;
  
      for (let char in wordFreqMap) {
          if (!strFreqMap[char] || strFreqMap[char] < wordFreqMap[char]) {
              canFormWord = false;
              break;
          }
      }
  
      if (canFormWord) {
          feelings++;
      }
  }
    if(feelings > 1 || feelings === 0){
    return `${feelings} feelings.`
    }else{
    return `${feelings} feeling.`
    }
  }