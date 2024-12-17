//Given an array of integers, calculate the ratios
//  of its elements that are positive, negative, and zero. 
// Print the decimal value of each fraction on a new line 
// with  places after the decimal.

//(7KYU) PlusMinus

function plusMinus(arr) {
    let countPositive = 0
    let counNegative = 0
    let countZero = 0
    arr.forEach((num)=>{
        if(num > 0) countPositive++
        else if (num<0){
            counNegative++
        }else{
            countZero++
        }
    })
    console.log(`${(countPositive/arr.length).toFixed(6)}`)
    console.log(`${(counNegative/arr.length).toFixed(6)}`)
    console.log(`${(countZero/arr.length).toFixed(6)}`)
}
