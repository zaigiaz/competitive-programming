// Given an array of strings strs, group the together. You can return the answer in any order.

// sort every string, then compare which sorted strings are similar (have same value), then push together in array
// probably need hash map, and need to return as 2d array.


// What I needed to know:
// accessing hash maps correctly, I didnt know you could use them like array
// also remember for hash map it.first(), and it.second() as ways of acessing members

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

      vector<string> sorted;
      unordered_map<string, vector<string>> mp;

      // sort every string in strs
      for(int i = 0; i<strs.size(); i++) {
	string val = strs[i];
	sort(val.begin(), val.end());
	mp[val].push_back(strs[i]);
      }
      
      vector<vector<string>> ans;
      for(auto it : mp) {
	ans.push_back(it.second);
      }

        return ans;
    }
};
