/*

Original Question: This time no story, no theory. The examples below show you how to write function accum:

Examples:
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
The parameter of accum is a string which includes only letters from a..z and A..Z.

*/

class Accumul {
public:
    static std::string accum(const std::string &s);
};

std::string Accumul::accum(const std::string& s) {
  std::string output;
  for (int i = 0; i < s.length(); i++) {
    for (int j = 0; j < i+1; j++) {
      output.append(s.substr(i, 1));
    }
    if ((s.length()-1) != i) output.append("-"); //write the "-" between sets
  }
  output[0] = toupper(output[0]);
  for (int i = 1; i < output.length(); i++) {
    if (output[i-1] == '-') {
      output[i] = toupper(output[i]);
    } else {
      output[i] = tolower(output[i]);
    }
  }

  return output;
}
