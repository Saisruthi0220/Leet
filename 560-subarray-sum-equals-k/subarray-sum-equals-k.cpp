class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> seen = {{0, 1}};
        int subCnt = 0;
        int prefixSum = 0;

        for (int i : nums) {
            prefixSum += i;
            int req = prefixSum - k;
            
            if (seen.count(req)) {
                subCnt += seen[req];
            }
            
            seen[prefixSum]++;
        }

        return subCnt;
    }
};