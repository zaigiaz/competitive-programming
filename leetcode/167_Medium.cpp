// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they
// add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2]
// where 1 <= index1 < index2 <= numbers.length.
// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
// The tests are generated such that there is exactly one solution. You may not use the same element twice.

// finished correctly no errors!!!!!

target = 9
2,3,4,5,6,9,10,11,15
                                  
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      
      // numbers is already sorted in non-decreasing order
      // this is kind of like binary search at least considering how the if() statements will go
      // remember that it is one-indexed

      // numbers[r] cannot be greater than target

      // declare one-indexed pointers and container size
      int l=0, r=numbers.size()-1;
      int sum;

      while(l < r) {
	sum = numbers[l] + numbers[r];

	if(sum == target) {
	  return {l+1, r+1};
	}
	
	if(sum < target) {
	  ++l;
	}

	if(sum > target) {
	  --r;
	}

      }

      return {l+1, r+1};
    }
};
 
