//Create an any? (JS: any) function that accepts an array and a block (JS: function), and 
// returns true if the block (/function) returns true for any item in the array. If the array is empty, the function should return false

//(8kYU) CreateAny()
function any(arr, block) {
    if (arr.length === 0) {
        return false; // Return false if the array is empty
      }
      
      for (let i = 0; i < arr.length; i++) {
        if (block(arr[i])) {
          return true; // Return true as soon as the block returns true for an item
        }
      }
      
      return false; // Return false if none of the items satisfy the block function
    }
    