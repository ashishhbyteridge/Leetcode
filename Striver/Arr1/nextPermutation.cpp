class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pos = 0;
        for(int i = n-1; i >= 0; i--){
            if(pos) break;
            for(int j = i ; j >=0 ; j--){
                if(nums[j] < nums[i]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    pos = j;
                    break;
                }
            }
        }
        cout << "pos = " << pos <<endl;
        if(!pos){
            sort(nums.begin(), nums.end());
        }
        else {
            sort(nums.begin() + pos + 1, nums.end());
        }
        for(auto i : nums) cout << i << " "; cout <<endl;
    }
};