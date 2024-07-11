//Your goal in this kata is to implement a //difference function, which subtracts one list //from another and returns the result.

//It should remove all values from list a, //which are present in list b keeping their //order.

//arrayDiff([1,2],[1]) == [2]
//level 6kyu (Array.diff)

function arrayDiff(a, b) {
    // this filters the elements in bothe array that are the same by calling the filter() method and the include() method
  return a.filter(item => !a.includes(item))
  
  }