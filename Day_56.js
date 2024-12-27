//The rating for Alice's challenge is the triplet a = (a[0], a[1], a[2]), 
// and the rating for Bob's challenge is the triplet b = (b[0], b[1], b[2]).
//The task is to find their comparison points by comparing a[0] with b[0], 
// a[1] with b[1], and a[2] with b[2].
//If a[i] > b[i], then Alice is awarded 1 point.
//If a[i] < b[i], then Bob is awarded 1 point.
//If a[i] = b[i], then neither person receives a point.

//(7kYU) Compare triplets

function compareTriplets(a, b) {
    let alice, bob;
    alice = 0;
    bob = 0;
    let result = []
        for(let i =0; i< a.length; i++){
            if(a[i] > b[i]){
                alice++
            }if(a[i] < b[i]){
                bob++
            }
        }
        result.push(alice)
        result.push(bob);
        return result;
    }