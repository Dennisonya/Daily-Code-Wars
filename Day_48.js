//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

//(7KYU) miniMaxSum

function miniMaxSum(arr) {
    // Write your code here
    arr.sort((a,b)=> a-b)

    let min = arr.slice(0,4).reduce((acc,curr)=> acc+ curr, 0)
    let max = arr.slice(1).reduce((acc,curr)=> acc+curr, 0)
    
    console.log(`${min} ${max}`)
}