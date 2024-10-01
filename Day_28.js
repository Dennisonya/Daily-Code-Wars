//You are going to be given a word. 
//Your job is to return the middle character of the word. 
//If the word's length is odd, return the middle character. 
//If the word's length is even, return the middle 2 characters.
/// (7kyu) Get the Middle Character

function getMiddle(s) {
    let kata = s.split('');
    let middle = Math.floor(s.length / 2);
    return s.length % 2 === 0
      ? kata[middle - 1] + kata[middle]
      : kata[middle];
  }

  //Given a string of digits, you should replace any digit below 5 with '0'
 //  and any digit 5 and above with '1'. Return the resulting string.
 // (7kyu) Fake Binary

 function fakeBin(x){
    let kata = x.split('')
    
    kata = kata.map(element=>{
      let number = Number(element)
       return number < 5 ? element = '0' : element ='1'
    })
    return kata.join('')
  }