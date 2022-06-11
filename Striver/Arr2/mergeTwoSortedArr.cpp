class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = n - 1, j = n - 1;
        int k = m + n - 1;
        
        while(k >= 0 && (i >= 0) && (j >= 0) ){
            cout<< "compairing "<< nums1[i] << " " << nums2[j] << endl;
            if(nums1[i] < nums2[j]){
                nums1[k--] = nums2[j--];
            }
            else if(nums1[i] >= nums2[j]){
                nums1[k] = nums1[i];
                nums1[i] = 0;
                i--; k--;
            }
        }
        while(i>=0){
            nums1[k--] = 
        }
    }
};