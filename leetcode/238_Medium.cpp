// Given an integer array nums, return an array answer such that answer[i] is equal to the product of
// all the elements of nums except nums[i].

// just iterate over for loop no need for fancy shit?
// has to be less than or equal O(n)

// get all elements in hash map, get sum of all elements then subtract the one at i

// WRONG SOLUTION
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> answer;
      unordered_map<int, int> elems;

      int i = 0;
      int sum = 0;
      for(auto it : nums) {
	sum += it;
	elems.insert({++i,it});
      }
      
      for(auto it : elems) {
	answer.push_back(sum - it.second);
      }
    
      return answer;
    }
};


// I needed a single array that multiplied everything to the left and right of it by and adding those products
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.length;
      int[] result = new int[n];

        // Step 1: Initialize result array with 1
        Arrays.fill(result, 1);

        // Step 2: Left product
        int leftProd = 1;
        for (int i = 0; i < n; i++) {
            result[i] = leftProd;
            leftProd *= nums[i];
        }

        // Step 3: Right product
        int rightProd = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= rightProd;
            rightProd *= nums[i];
        }

        return result;
    }
};

