// TC: O(N) + O(N)
//SC: O(1)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), maxlen = 0, l=0, r=0, zeroes = 0;

        while(r<n){
            if(nums[r] == 0) zeroes ++;

            while(zeroes > k){
                if(nums[l] == 0) zeroes--;
                l++;
            }
            if(zeroes <= k) maxlen = max(maxlen, r-l+1);
            r++;
        }

        return maxlen;
    }
};


// TC: O(N)
//SC: O(1)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), maxlen = 0, l=0, r=0, zeroes = 0;

        if(r<n){
            if(nums[r] == 0) zeroes ++; // i am not decreasing the window size here, bcoz i want the longest window

            while(zeroes > k){
                if(nums[l] == 0) zeroes--;
                l++;
            }
            if(zeroes <= k) maxlen = max(maxlen, r-l+1);
            r++;
        }

        return maxlen;
    }
};
