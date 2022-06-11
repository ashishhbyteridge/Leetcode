class Solution {
public:
    void solve(vector<int> arr, vector<vector<int>> &ans, vector<int> dp, int tar, int ind, int n){
        if(tar == 0){
            ans.push_back(dp);
            return;
        }
        // if(tar < 0) return;
        for(int i = ind; i < n; i++){
            if(arr[ind] > tar) break;
            if(i != ind && arr[i] == arr[i-1]) continue;
            dp.push_back(arr[i]);
            solve(arr, ans, dp, tar - arr[i], i + 1, n);
            dp.pop_back();
            // solve(arr, ans, dp, tar, i + 1, n);
        }   
    } 
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> dp;
        sort(candidates.begin(), candidates.end());
        solve(candidates, ans, dp, target, 0, candidates.size() );
        return ans;
    }
};