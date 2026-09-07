class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size(),res;
        unordered_map<int,int>frq;
        for(int i=0;i<n;i++){
            frq[nums[i]]++;
        }
        for(auto it:frq){
            if(it.second==1){
                res=it.first;
            }
        }
        return res;
    }
};