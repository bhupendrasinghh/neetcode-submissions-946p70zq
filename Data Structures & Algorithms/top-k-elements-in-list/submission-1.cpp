class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int,int>>ans;
        unordered_map<int,int>mapp;
        for(int i=0;i<n;i++){
            mapp[nums[i]]++;
            
        }
        for(auto it : mapp){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end(),[](pair<int,int>a,pair<int,int> b){
            return b.second<a.second;
        });
        vector<int> output;
        for(int i=0;i<k;i++){
            output.push_back(ans[i].first);
        }
        return output;

    }
};
