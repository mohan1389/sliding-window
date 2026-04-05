//time O(n)
//space O(256)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mpp;
        int l=0, r=0, maxlen=0, n = s.size();

        while(r < n){
            if(mpp.find(s[r]) != mpp.end()){
                if(mpp[s[r]] >= l) l = mpp[s[r]] + 1; // this 'if' condition is important bcoz i dont want my 'l' to go backwards
            }
            mpp[s[r]] = r;
            int len = r-l+1;
            maxlen = max(maxlen,len);
            r++;
        }

        return maxlen;
    }
};
