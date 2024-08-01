//Given an array of integers your solution should find the smallest integer.
//(8kyu) Find the smallest integer in the array

function findSmallestInt(arr) {
    //your code here
    arr.sort((a,b)=> a-b)
    return arr[0];
  }