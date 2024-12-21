//Given a list of integers, count and return the number
//  of times each value appears as an array of integers

//(6KYU) countingSort

function countingSort(arr) {
    // Write your code here
    let result = []
    for(let i = 0; i<100; i++){
        result.push(0);
    }
    for(let i = 0; i<arr.length; i++){
        result[arr[i]]++;
    }
    return result;
        
}