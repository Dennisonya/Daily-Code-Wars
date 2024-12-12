//Given a string of words, you need to find the highest scoring word.
//Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.
//For example, the score of abad is 8 (1 + 2 + 1 + 4).
//You need to return the highest scoring word as a string.
//If two words score the same, return the word that appears
// earliest in the original string.
//(6KYU) Highest Scoring Word

function high(x){
    let strings = x.split(' ')
    let alphabetObject = {}
    let highest =[]
    let sum = 0
    
      for (let i = 0; i < 26; i++) {
        const letter = String.fromCharCode(97 + i);
        alphabetObject[letter] = i + 1;
      }
      
          for(let word of strings){
            for(let char of word){
              sum += alphabetObject[char]
            }
            highest.push(sum)
            sum = 0;
          }
      
      const largest = Math.max(...highest)
      const index = highest.indexOf(largest)
      
      return strings[index];
    }