//Complete the solution so that it returns true if the first argument(string)
//passed in ends with the 2nd argument (also a string).

//(7Kyu) String ends with?

#include <string>
bool solution(std::string const &str, std::string const &ending) {
  if(ending.size() > str.size()) return false;
  return str.substr(str.size() - ending.size())  == ending;
}


//Given two integers a and b, which can be positive or negative, 
//find the sum of all the integers between and including them and return it. 
//If the two numbers are equal return a or b.

//Note: a and b are not ordered!

//(7KYU) Beginner Series #3 Sum of Numbers

int get_sum(int a, int b)
{
  int sum=0;
  
  if(a > b){
    for (int i = b; i<=a; i++){
      sum +=i;
    }
  }else{
    for(int i = a; i<=b; i++){
      sum += i;
    }
  }
  return sum;
}