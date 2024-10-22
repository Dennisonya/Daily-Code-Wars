//Complete the solution so that it returns true if the first argument(string)
//passed in ends with the 2nd argument (also a string).

//(7Kyu) String ends with?

#include <string>
bool solution(std::string const &str, std::string const &ending) {
  if(ending.size() > str.size()) return false;
  return str.substr(str.size() - ending.size())  == ending;
}