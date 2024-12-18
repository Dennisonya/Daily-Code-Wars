//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

//(7KYU) miniMaxSum

function miniMaxSum(arr) {
    // Write your code here
    arr.sort((a,b)=> a-b)

    let min = arr.slice(0,4).reduce((acc,curr)=> acc+ curr, 0)
    let max = arr.slice(1).reduce((acc,curr)=> acc+curr, 0)
    
    console.log(`${min} ${max}`)
}

//Given a time in -hour AM/PM format, convert it to military (24-hour) time.

//(6KYU) timeConversion

function timeConversion(s) {
    // Write your code here
   const period = s.slice(-2);

    // Extract hour, minute, and second
    let [hour, minute, second] = s.slice(0, -2).split(":");

    // Convert hour to 24-hour format
    if (hour === "12" && period === "AM") {
        hour = "00"; // Midnight case
    } else if (period === "PM" && hour !== "12") {
        hour = String(Number(hour) + 12); // Afternoon case
    }

    // Return the result in 24-hour format
    return `${hour}:${minute}:${second}`;
}       

