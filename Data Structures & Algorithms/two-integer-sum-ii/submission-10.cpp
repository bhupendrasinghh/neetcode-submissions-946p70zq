class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int>ans = {};
        
        for(int i=0;i<n;i++){
            int j=i+1;
            while(j<n){
                if(nums[i]+nums[j]== target){
                    ans.push_back(i+1);
                    ans.push_back(j+1);

                    return ans;
                    j++;
                }
                if(nums[i]+nums[j] > target ){
                    break;
                    j++;
                }
                j++;
                
            }

        }
        return ans;
    }

};
