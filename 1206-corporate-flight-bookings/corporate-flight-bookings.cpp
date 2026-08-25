class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n,0);
        for(const auto& booking:bookings){
            int l=booking[0]-1;
            int r=booking[1]-1;
            int val=booking[2];
            diff[l]+=val;
            if(r+1<n){
                diff[r+1]-=val;
            }
        }
        for(int i=1;i<n;i++){
                diff[i]+=diff[i-1];
         }
        return diff;
    }
};