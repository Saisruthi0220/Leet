class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left=0;
        int currsum=0,cnt=0;;
        for(int right=0;right<arr.size();right++){
            currsum+=arr[right];//6
            if(right-left+1==k){
                int avg=currsum/k;
                if(avg>=threshold){
                    cnt++;
                }
                currsum-=arr[left];
                left++;
            }

        }
        return cnt;

    }
};