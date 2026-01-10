// We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.
// Given an integer array nums, return the length of its longest harmonious subsequence
// among all its possible subsequences.

second:
0 1 2 5 4 3 6 7

first:
1,2,2,2,3,3,5,7
        ^   ^   

class Solution {
public:
    int findLHS(vector<int>& nums) {
      int left=0, right=left+1;
      int diff, maxdiff;

      vector<pair<int, int>> store;

      for(int i=0; i<nums.size(); i++) {
	    store.push_back({nums[i], i});
      }

      // sort based on value (nums[i])
      sort(store.begin(), store.end());

      while(right < nums.size()) {
	// difference in indexes (second number inserted)
	diff = store[right].first - store[left].first;
            
	// if diff is one and bigger than previous diff
	if(diff == 1) {	 
	  int len = store[right].second - store[left].second;
	  if(len > maxdiff) { maxdiff = len; }
	}

	// increment pointer when diff > 1
	else if(diff > 1) { 
	  left++; 
	  continue;
	}

	right++;
      }
      return maxdiff;
    }
};





// solution for the problem
class Solution {
public:
    static int findLHS(vector<int>& nums) {

        const int n=nums.size();

        sort(nums.begin(), nums.end());

        int maxLen=0;

        for(int l=0, r=0; r<n; r++) {

	  // while left hand pointer less than right and value at left less than right-1, increment left pointer
	  while(l<r && (nums[l] < nums[r]-1)) l++;

	  // if difference is 1, change maxlen value
	  if (nums[l] == nums[r]-1) { maxLen = max(maxLen, r-l+1); }
        }

        return maxLen;
    }
};
