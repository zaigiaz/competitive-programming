// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.

// Solution found basically immediately with some help from cppreference
// fastest solution in C++ is sorting the array and then just iterating over it, since sorting is O(N x log(N)) in std

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

      // (num, num_freq)
      unordered_map<int, int> freq;

      // placeholder value in hash_map
      int ctr=0;

      // push all values into frequency table
      for(auto it : nums) {
	if(freq.find(it) != nums.end()) {	 
	  return true;
	}

	freq.insert({it, ctr});
      }

      return false;
    }
};
