class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int i=0,j=1;
        int n= nums.size();
        int profit =0;
        while(j<n){
            if(nums[i]>nums[j]){
                i=j;
            }
            else {
                profit=max(profit,nums[j]-nums[i]);
            
            }
            j++;
            
        }
        
        return profit;
        
    }
};
