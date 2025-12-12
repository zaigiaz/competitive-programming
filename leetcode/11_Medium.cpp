// Description:
// You are given an integer array height of length n. 
// There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container 
// contains the most water.
// Return the maximum amount of water a container can store.


// hint: use two-pointers to find solution
// finding area x*y or width*length over array area (unsorted, cant sort)
// basic two-pointer is like O(n/2)?


// after action report:
// I got 80% of the way there but had no knowledge of sliding window problem and got stuck, then read a little about it and solved
// sliding window is when you iterate one pointer over another based on condition rather than just always advancing both simultaneously.

class Solution {
public:
    int maxArea(vector<int>& height) {
      int max;

      int i = 0;
      int j = height.size()-1;
	
      while(i < j) {
	
	// find the shorter tower of the two
	// then calculate the area
	// then push back into array
	int shorter = min(height[i], height[j]);
	area = (j-i) * shorter;
	
	// set new max
	if(area > max) { max = area; }

	// decide which pointer to move
	if(height[i] > height[j]) { --j; }
	else { ++i; }
	
      }      
      // return the largest area
      return max;
    }
};

