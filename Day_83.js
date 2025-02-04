//To check if a phrade reversed is the same as the original phrase not reversed.
//(6KYU) isPalindrome

var isPalindrome = function(s) {
    const phrase = s.replace(/[^a-zA-Z0-9]/g,'').toLowerCase();
    let s1 = phrase.split('').reverse().join('');
    return s1 === phrase
};