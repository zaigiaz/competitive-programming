// You are given a license key represented as a string s that consists of only alphanumeric characters and dashes
// The string is separated into n + 1 groups by n dashes. You are also given an integer k

// the new string must be broken up into k groups until
// we hit end of our groups

// RETROSPECTIVE:
// I didnt figure out that I could iterate over k groups like ++k instead of one at a time like ++i
// with the substring solution, I had the correct idea but got stuck at the very end with silly little error

class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        
      // isalpha() -> toupper()
      // modular arithmetic
      // read initial string and push into array?
      string nodash;

      for(char c : s) {
	if(c != '-') {
	  nodash += toupper(c);
	}
    }

      // evenly divide and leftover groups
      int l = nodash.length();
      int first_length = l%k;

      string first;
      string neworder;

      // first group
      if (first_length > 0) {
	neworder += nodash.substr(0, first_length);
      }

      // rest of groups
        for (int i = first_length; i < l; i += k) {
            if (neworder.length() > 0) {
                neworder += "-";
            }
            neworder += nodash.substr(i, k);
        }
      return neworder;
    }
};



