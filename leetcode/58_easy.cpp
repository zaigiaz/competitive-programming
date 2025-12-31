// Given a string s consisting of words and spaces, 
// return the length of the last word in the string.

// example: "here is my string"

class Solution {
public:

  bool is_space(char c) {
    if(c == ' ') { return true; }
    return false;
  }

  int lengthOfLastWord(string s) {
    reverse(s.begin(), s.end());

    // counter to check if hit char already or not
    int counter = 0;

    for(int i = 0; i < s.length(); i++) {

      if(counter > 0 && is_space(s[i])) {
	break;
      }
      else if(is_space(s[i]) && (counter == 0)) {
	continue;
      }
      else { 
	counter += 1;
      }
      
    }
    return counter;
  }
};

