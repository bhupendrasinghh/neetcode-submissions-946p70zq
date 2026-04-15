class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=nums1.size()-1,j=0;
        if(m==0){
                nums1= nums2;
            }
        while(i>=0 && j<nums2.size()){
            nums1[i]=nums2[j];
            i--;
            j++;
        }
        
        sort(nums1.begin(),nums1.end());

    }
};