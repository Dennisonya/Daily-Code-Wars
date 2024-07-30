//Check to see if a string has the same 
//amount of 'x's and 'o's. The method must
 //return a boolean and be case insensitive. 
 //The string can contain any char.

//Examples input/output:

//XO("ooxx") => true
//XO("xooxx") => false
//XO("ooxXm") => true

//(7kyu) Exes and Ohs

function XO(str) {
    //code here
  let countX= 0;
  let countO=0;
   let arr = str.toLowerCase().split('');  
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === 'x') {
            countX++;
        } else if (arr[i] === 'o') {
            countO++;
        }
    }

    return countX === countO;
}