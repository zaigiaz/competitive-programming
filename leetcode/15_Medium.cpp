// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]]
// such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// two pointer problem 
// have to return 2d array of all triplets that match these requirements
// all three triplets must be unique and sum to zero 

class Solution {
public:
  // check that sum is zero
  bool checksum(int a, int b, int c) {   
    if((a+b+c) == 0) {
      return true;	 
    }
    else return false;
  }

  vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());
    if((nums[0] > 0) || (nums.size() < 3)) { return ans; }

    int k = 0;
    int i = 1;
    int j = nums.size()-1;
    // i and j are two pointers but what about k
    // k is fixed number in the array

    while(i < j) {
      if(check_unique(nums[i], nums[j], nums[k])) {
	ans.push_back({nums[i], nums[j], nums[k]});
	
      }
      
      i++, j--;
    }

    return ans;
  }
};

