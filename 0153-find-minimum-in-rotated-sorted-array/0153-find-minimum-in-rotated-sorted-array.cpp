class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int h = nums.size() - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] > nums[h]) {
                l = l + 1;
            }else {
                h = h - 1;
            }
        }

        return nums[l];
    }
};