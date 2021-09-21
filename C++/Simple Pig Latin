/*

Original Question: Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.

*/

std::string pig_it(std::string str) {
  std::vector<std::string> words;

  int start = 0;
  int stop = str.find(" ");
  while (stop != -1) {
    words.push_back(str.substr(start, stop - start));
    start = stop + 1;
    stop = str.find(" ", start);
  }
  words.push_back(str.substr(start, stop - start));

  str.clear();

  for (int i = 0; i < (int)words.size(); i++) {
    words[i].push_back(words[i][0]);
    words[i].erase(0, 1);
    if (words[i] != "!" && words[i] != "." && words[i] != "," && words[i] != "?")
      str += words[i] + "ay";
    else
      str += words[i];
    str += " ";
  }
  str.pop_back();
  return str;
}
