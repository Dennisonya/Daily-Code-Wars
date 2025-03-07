//Given an array of integers, where all elements but one occur twice,
//  find the unique element.
//Example
// a = [1,2,2,1,4]
//The unique element is . 4

function lonelyinteger(a) {
    // Write your code here
    let freqMap = {}
    for (let i = 0; i<a.length; i++){
        freqMap[a[i]] = (freqMap[a[i]] || 0) +1
    }
    for (const [key, value] of Object.entries(freqMap)) {
        if(value === 1){
            return key;
            break;
        }
}
}

//Given a square matrix, calculate the absolute difference between the sums of its diagonals.


function diagonalDifference(arr) {
    // Write your code here
    let right=0, left=0;
    
    for(let i = 0; i<arr.length; i++){
        for(let j=0; j<arr.length; j++){
            if(i === j){
                right+= arr[i][j]
            }if(i+j === arr.length -1){
                left += arr[i][j]
            }
        }
    }
    return Math.abs(right - left);
}