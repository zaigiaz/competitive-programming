// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than floor(n / 2) times.
// You may assume that the majority element always exists in the array

// find the mode of the array (most frequent number)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      // need hash table to count frequency of encountered elements
      // key is number, value is frequency
      unordered_map<int, int> freq;
      int fq = 1;
      string new_name = "hello there";

      int majority = 0;

      for(int i=0; i<nums.size(); i++) {
	auto insert = freq.insert({nums[i], fq});
	
	// if key exists update fq
	if(!insert->second) { 
	  freq.first->second += 1; 
	  // check majority case
	}
	
	else { /* check majority case */ }

      }
      
      return majority;
    }
};
