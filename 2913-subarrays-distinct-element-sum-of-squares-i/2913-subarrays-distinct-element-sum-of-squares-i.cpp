class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            unordered_set<int> unique;
            int count = 0;
            
            for (int j = i; j < n; j++) {

                if (unique.find(nums[j]) == unique.end()) {
                    unique.insert(nums[j]);
                    count += 1;
                }

                sum += count * count;
            }
        }

        return sum;
    }
};