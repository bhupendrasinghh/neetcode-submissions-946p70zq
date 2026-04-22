class Solution {
public:
    int characterReplacement(string s, int k) {
       vector<int> freq(26,0);  ///hasing
       int i=0,maxFreq=0,maxLen=0;
       for(int j=0;j<s.size();j++){
            freq[s[j]-'A']++;  //include the current char
            maxFreq = max(maxFreq,freq[s[j] -'A']);
            if((j-i+1)-maxFreq>k){
                freq[s[i]-'A']--;   //remove left char
                i++;
            }
            maxLen = max(maxLen, j-i+1);
       } 
       return maxLen;
        
    }
};
