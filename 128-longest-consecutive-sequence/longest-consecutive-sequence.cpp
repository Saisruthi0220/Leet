class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int maxi=1,cnt=1;
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]+1==nums[i+1]){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else if(nums[i]!=nums[i+1]){
                cnt=1;
            }
        }
        return maxi;
    }
};