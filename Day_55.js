//A left rotation operation on an array of size  
// shifts each of the array's elements  unit to the left. 
// Given an integer, rotate the array that many steps left
//  and return the result.

//(6KYU) RotateLeft

function rotateLeft(d, arr) {
    // Write your code here
     let n = arr.length;
    // Optimize by reducing unnecessary rotations
    d = d % n;
    // Perform the rotation using slice
    return arr.slice(d).concat(arr.slice(0, d));
}
