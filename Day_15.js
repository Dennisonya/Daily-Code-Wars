//Complete the method/function so that it 
//converts dash/underscore delimited words 
//into camel casing. The first word within the 
//output should be capitalized only if the 
//original word was capitalized 
//(known as Upper Camel Case, also often referred to as Pascal case).
//The next words should be always capitalized.
// (6kyu) Convert string to camel case

function toCamelCase(str){
    let newStr= str.split("")
    
    for(let i =0; i<newStr.length; i++){
        if(newStr[i] === '-' || newStr[i] ==='_'){
          //converts the next char to uppercase
            newStr[i+1] = newStr[i+1].toUpperCase()
          //removes the "-" or '_' character
            newStr.splice(i,1)
        }
    } 
      
    return newStr.join("")
    }