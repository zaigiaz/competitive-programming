// Given an integer array nums and an integer k, return the k most frequent elements.
// You may return the answer in any order.


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
   
      // number, frequency pair
      unordered_map<int, int> freq;
      vector<pair<int, int>> mp;
      
	for(size_t i=0; i<nums.size(); i++) {
	  freq[nums[i]]++;	  
	}

	for(auto it : freq) {
	  mp.push_back({it.second, it.first});
	}

	sort(mp.begin(), mp.end());

	vector<int> ans;

	for(int i=0; i<k; i++) {
	  ans.push_back(mp[mp.size()-i-1].second);
	}

	return ans;
    }
};


