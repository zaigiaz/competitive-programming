/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

// this is binary search, however, the problem doesnt state that the container is
// sorted or in any order, therefore its a dumb problem and the description should be better

// also this is not binary search on a container so its a bit simple compared to other examples of binary search

class Solution {
public:
  int guessNumber(int n) {

    int high = n;
    int low = 1;
    int pick = 0;

    while(low <= high) {
    int mid = (high + low)/2;

    if(guess(mid) == 0) { pick = mid; break; }
    else if(guess(mid) == 1) { high = mid+1; }
    else if(guess(mid) == -1) { low = mid-1; }

    }
    return pick;
  }
};
