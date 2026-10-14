class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int water = 0;
        int maxWater = 0;
        
        int l = 0;
        int r = n - 1;

        while (l <= r) {
            int b = r - l;

            water = b * min(height[l], height[r]);
            maxWater = (maxWater > water ? maxWater : water);

            if (height[l] > height[r]) {
                r--;
            }else {
                l++;
            }
        }

        return maxWater;
    }
};