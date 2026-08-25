class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>res(n);
        int sum=0;
       for(const auto& booking:bookings){
            int l=booking[0];
            int r=booking[1];
            int val=booking[2];
            for(int i=l-1;i<r;i++){
                res[i]+=val;
            }
        }
        return res;
    }
};