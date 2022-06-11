class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1, ele = nums[0], mx = -1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == ele){
                cnt++;
                if(cnt >= mx){
                    ele = nums[i];
                }
                mx = max(mx, cnt);
            }
            else{
                if(cnt > 0){
                    cnt--;
                }
                else {
                    cnt++;
                    ele = nums[i];
                }
            }
        }
        return ele;
    }
};