//Your task is to write a function that takes a string and return a new string with all vowels removed.

//For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

//Note: for this kata y isn't considered a vowel.
//(7KYU) Disemvowel Trolls
# include <string>

std::string disemvowel(const std::string& str) {
    // return
  std::string result = str;
  
 result.erase(
        std::remove_if(result.begin(), result.end(), [](char c) {
            c = tolower(c); 
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        }),
        result.end()
    );
  return result;
}
           
      