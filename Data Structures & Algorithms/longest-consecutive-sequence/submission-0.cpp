class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set<int>st (nums.begin(),nums.end());
        int n = nums.size();
        for(int num : st){
            if(st.find(num-1)==st.end()){
                int currentNum = num;
                int count = 1;
                while(st.find(currentNum + 1) != st.end()){
                    currentNum++;
                    count++;
                }
                ans=max(ans,count);
            }

        }
        return ans;
        
    }
};
