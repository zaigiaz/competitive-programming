// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average
// value and return this value. Any answer with a calculation error less than 10-5 will be accepted.


// problem: I didnt compute range of sliding window efficiently, and somehow thought that
// sum would fall out of scope after for-loop and that was stupid of me

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

      int left=0, right=left+k;
      double maxsum=0, sum=0;

      // starting window
      for(int i=0; i<k; i++) {
        sum += nums[i];
      }
      
      maxsum = sum;

      // sliding window logic
      // it sums by
      for(int i=k; i<nums.size(); i++) {

	sum += nums[i];
	sum -= nums[i - k];

	if(sum > maxsum) maxsum = sum;
      }

      return (double) maxsum/k;
    }
};

