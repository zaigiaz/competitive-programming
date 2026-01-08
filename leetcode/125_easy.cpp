// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters
// it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
      string new_s;

      for(char c : s) {
	if(isalnum(c)) {
	  new_s += tolower(c);
	}
      }

      int i = 0;
      int j = new_s.size()-1;
      
      while(i < j) {
	if(new_s[i] != new_s[j]){
	  return false;
	}
	i++, j--;
      }


      return true;
    }
};



int main(void) {
  
  Solution s;
  if(s.isPalindrome("A man, a plan, a cAnal: Panama") == true) { std::cout << "true\n"; }
  else std::cout << "false" << std::endl;
} 
