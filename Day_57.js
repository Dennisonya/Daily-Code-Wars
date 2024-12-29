//There is a collection of input strings 
// and a collection of query strings. 
// For each query string, determine how 
// many times it occurs in the list of 
// input strings. Return an array of the results.

//(6KYU) MatchStrings

function matchingStrings(stringList, queries) {
    // Write your code here
    let result = []
        for(let i =0; i<queries.length; i++){
            let query = queries[i]
            let count = 0
            for(let j = 0; j<stringList.length; j++){
                if(query === stringList[j])
                    count++
            }
            result.push(count);
        }
        return result;
}
