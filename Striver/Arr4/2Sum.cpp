class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        set<int> st;
        int pos = 0;
        for(auto i : nums){
            st.insert(i);
            mp.insert(make_pair(i, pos));
            pos++;
        }
        
       vector<int> ansArr; 
        for(int i = 0; i < nums.size(); i++){
            if(st.count(target - nums[i]) == 1){
                if(mp[target - nums[i] ] == i) continue;
                ansArr.push_back(i);
                ansArr.push_back(mp[target - nums[i]]);
                return ansArr;
            }
        }
        return ansArr;
    }
};