class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n+1);
        int rs=0;
        for(int i=0;i<n;i++){
            rs+=nums[i];
            pref[i+1]=rs;
        }
        for(int i=0;i<n;i++){
            int lsum=pref[i];
            int rsum=pref[n]-pref[i+1];
            if(lsum==rsum) return i;
        }
        return -1;
    }
};