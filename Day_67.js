//Given an array of integers, calculate the
//  ratios of its elements that are positive, 
// negative, and zero. Print the decimal value 
// of each fraction on a new line with  6 places 
// after the decimal.

//(7kYU) PLUSMINUS


function plusMinus(arr) {
    // Write your code here
let positive =0, negative =0, zero= 0;
for(let i = 0; i<arr.length; i++){
    if(arr[i] > 0){
        positive++;
    }if(arr[i]< 0){
        negative++;
    }if(arr[i] === 0){
        zero++;
    }
}
positive = positive/arr.length
negative = negative/arr.length
zero = zero/arr.length

console.log(positive)
console.log(negative)
console.log(zero)
}
