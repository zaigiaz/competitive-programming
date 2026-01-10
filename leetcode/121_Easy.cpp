// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

      7,1,5,3,6,4
l:    ^   
r:      ^           
	

// Problem I ran in too: I didnt guess that I could set l=r instead of just l++ which didnt make sense

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      
      int l=0, r=1; 
      int n=prices.size();
      int maxsum=0, sum=0;



      // not sorted array
      while(r < prices.size())

	if(prices[r] > prices[l]) {
	  sum = prices[r] - prices[l];
	  if(sum > maxsum) maxsum = sum;
	} else l=r;
      

      r++;
    }
  return maxsum;
};
