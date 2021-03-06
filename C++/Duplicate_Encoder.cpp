/*

Original Question: The goal of this exercise is to convert a string to a new string 
where each character in the new string is "(" if that character appears only once in 
the original string, or ")" if that character appears more than once in the original 
string. Ignore capitalization when determining if a character is a duplicate.

*/

#include <string>

std::string duplicate_encoder(const std::string& word) {
  std::string output;
  std::string lowerCaseWord;
  for (int i = 0; i < word.length(); i++)
    lowerCaseWord += tolower(word[i]);
  for (int i = 0; i < lowerCaseWord.length(); i++)
    if (lowerCaseWord.find_first_of(lowerCaseWord[i]) == lowerCaseWord.find_last_of(lowerCaseWord[i]))
        output += "(";
    else
      output += ")";
  return output;
}
