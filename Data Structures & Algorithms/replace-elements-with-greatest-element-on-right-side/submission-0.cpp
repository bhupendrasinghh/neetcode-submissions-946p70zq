class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> answer (n);
        int maxR=-1;
        
        for (int i=n-1;i>=0;i--){
            answer[i]=maxR;
            maxR=max(maxR,arr[i]);
            
            
        }
        return answer;
    }
};