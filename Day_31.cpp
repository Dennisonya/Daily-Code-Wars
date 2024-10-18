//Digital root is the recursive sum of all the digits in a number.
//Given n, take the sum of the digits of n. If that value has more than one digit, 
//continue reducing in this way until a single-digit number is produced. 
//The input will be a non-negative integer.

//Sum of Digits / Digital Root

int digital_root(int n)
{
    if(n < 10){
      return n;
    }
  int sum = 0;
  
     while (n>0){
      sum += n % 10;
        n /= 10;     
     }
  
      return digital_root(sum);
}