// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
//  representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.


// this is supposed to be a two-pointers problem but we could just append array2 to array1 and then sort array1?
// solved

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

      // our two pointers
      int i = m;
      int j = 0;

      // from [m, m+n] append nums2 to nums1
      while(i < (m+n)) {
	nums1[i] = nums2[j];
		  
	++i, ++j;
      }

      // sort in ascending order
      sort(nums1.begin(), nums1.end());    
    }
};
