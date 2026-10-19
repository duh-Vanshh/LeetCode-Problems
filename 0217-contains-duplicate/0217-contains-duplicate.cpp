class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set;

        for (int i : nums) {
            if (set.count(i)) {
                return 1;
            }else {
                set.insert(i);
            }
        }

        return 0;
    }
};