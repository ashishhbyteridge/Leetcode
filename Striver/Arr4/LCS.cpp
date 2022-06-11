class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        for(auto i : nums){
           mp[i]++; 
        }
        int mx = 0;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]]){
                cnt++;
                int next = nums[i]++;
                while(mp[next]){
                    cnt++;
                    mp[next]--;
                    next++;
                    mx = max(cnt, mx);
                }
                cnt = 0;
            }
            else cnt = 0;
        }
        return mx;
    }
};