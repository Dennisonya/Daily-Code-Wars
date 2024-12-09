//This time no story, no theory.
// The examples below show you how to write function accum:
//accum("abcd") -> "A-Bb-Ccc-Dddd"
//accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
//accum("cwAt") -> "C-Ww-Aaa-Tttt"
//(7KYU) Mumbling

function accum(s) {
	// your code
  let arr = s.split('')
  let result = []
    for(let i= 0; i<arr.length; i++){
    let segment = arr[i].toUpperCase() + arr[i].toLowerCase().repeat(i);
    result.push(segment);  
    }
  
  return result.join('-');
}
