class Solution {
public:
    void solve(vector<int> arr, vector<vector<int>> &ans, vector<int> dp, int target, int ind, int n){
        if(target == 0){
            ans.push_back(dp);
            return;
        }
        if(ind == n || target < 0) return;
        dp.push_back(arr[ind]);
        solve(arr, ans, dp, target - arr[ind], ind , n);
        dp.pop_back();
        solve(arr, ans, dp, target , ind + 1, n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>> ans;
        vector<int> dp;
        solve(candidates, ans, dp, target, 0, candidates.size());
        return ans;
    }
};