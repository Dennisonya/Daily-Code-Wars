//We define the "unfairness" of a list/array as the minimal difference between max(x1,x2,...xk) and min(x1,x2,...xk), 
// for all possible combinations of k elements you can take from the list/array;
//  both minimum and maximum of an empty list/array are considered to be 0.

//More info and constraints:

//lists/arrays can contain values repeated more than once, plus there are usually more combinations that generate the required minimum;
//the list/array's length can be any value from 0 to 106;
//the value of k will range from 0 to the length of the list/array,
//the minimum unfairness of an array/list with less than 2 elements is 0.

//(5KYU) Minimum unfairness of a list/array

function minUnfairness(arr, k) {
    if (k <= 1 || arr.length < 2) {
        return 0;
      }
      arr.sort((a, b) => a - b);
      let minDiff = Infinity;
    
      for (let i = 0; i <= arr.length-k; i++) {
        const currentDiff = arr[i + k - 1] - arr[i];
        if (currentDiff < minDiff) {
          minDiff = currentDiff;
        }
      }
    
      return minDiff;
    }
    