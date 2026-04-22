class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0,j=0;
        int maxLen=0;
        int n= s.size();
        while(j<n){
            if(mp.find(s[j]) != mp.end() && mp[s[j]]>=i){
                i=mp[s[j]]+1;
            }
            mp[s[j]] = j;
            maxLen=max(maxLen,j-i+1);
            j++;
        }
        return maxLen;
        
    }
};
