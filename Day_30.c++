//Complete the square sum function so that it squares each number 
//passed into it and then sums the results together.
//For example, for [1, 2, 2] it should return 9 because 

//(8Kyu) square(n)sum

#include <vector>
#include <cmath>
int square_sum(const std::vector<int>& numbers)
{
  
  int sum = 0;
  
  for(int number : numbers){
    sum += std::pow(number,2);
  }
  
  return sum;
}
