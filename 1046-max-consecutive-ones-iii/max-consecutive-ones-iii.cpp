class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0,right=0,zCnt=0,maxi=0;
        while(right<n){
            if(nums[right]==0) zCnt++;
            if(zCnt>k){
                if(nums[left]==0){
                    zCnt--;
                }
                left++;
            }
            if(zCnt<=k){
                maxi=max(maxi,right-left+1);
            }
            right++;
        }
        return maxi;
    }
};