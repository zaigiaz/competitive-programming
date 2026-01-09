// Given a string s, find the length of the longest without duplicate characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

      unordered_map<char, int> last_occur;

      int left=0, right=left+1;
      int maxlen;

      // window can shrink and grow
      // we cant let s[i] == s[j]
      // also check if s[j] has already occured and if move left index
      // all chars put into hash map showing last occurence and index

        while(left < right) {
	  
	last_occur.insert({s[right], right});

        if(s[left] == s[right]) {
            maxlen = right-left;
            left++;
        }

        ++right;
      }

      return maxlen;  
    }
};
