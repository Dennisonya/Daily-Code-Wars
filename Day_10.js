//This is the first part. You can solve the 
//second part here when you are done with 
//this. Multiply two numbers! Simple!
//The arguments are passed as strings.
//The numbers may be way very large
//Answer should be returned as a string
//The returned "number" should not start //with zeros e.g. 0123 is invalid
//Note: 100 randomly generated tests!

//(4kyu Multiplying numbers as strings)

function multiply(a, b){
  let numStr1 = a
  let numStr2 = b
  if (numStr1 === '0' || numStr2 === '0') {
    return '0';
  }

  const len1 = numStr1.length;
  const len2 = numStr2.length;
  const result = new Array(len1 + len2).fill(0);

  // Reverse the strings to facilitate multiplication
  const num1 = numStr1.split('').reverse();
  const num2 = numStr2.split('').reverse();

  for (let i = 0; i < len1; i++) {
    for (let j = 0; j < len2; j++) {
      const product = (num1[i] * num2[j]) + result[i + j];
      result[i + j] = product % 10;
      result[i + j + 1] += Math.floor(product / 10);
    }
  }

  // Remove leading zeros and reverse back to the correct order
  while (result[result.length - 1] === 0) {
    result.pop();
  }

  return result.reverse().join('');
}