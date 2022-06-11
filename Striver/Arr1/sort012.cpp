class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size() - 1;
        int i = 0, j = n;
        int lastPos = n;
        while(i <= j){
            cout << i << " " << j << endl;
           if((nums[i] == 2 || nums[i] == 1)&& nums[j] == 0){
               if(nums[i] == 2) cnt++;
               nums[i] = 0;
               nums[j] = 1;
               i++; j--;
           } 
           else if(nums[i] == 0) i++;
           
           else if(nums[j] == 1 || nums[j] == 2){
                if(nums[j] == 2) cnt++;
                nums[j] = 1; j--;
            }
        } 
        cout << cnt;
        while(cnt--){
            nums[lastPos--] = 2;
        }
    }
};