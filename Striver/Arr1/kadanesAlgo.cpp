class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int malx = 0;
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            malx = max(malx + nums[i] , nums[i]);
            ans = max(malx, ans);
        }
        return ans;
    }
};