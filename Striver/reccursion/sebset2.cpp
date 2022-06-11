class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>> ans = {{}};
       sort(nums.begin(), nums.end());
       int start; 
        for(int i = 0; i < nums.size(); i++){
            if(i == 0 || nums[i] != nums[i-1]) start = 0;
            for(int end = ans.size(); start < end; start++ ){
                vector<int> temp = ans[start];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};