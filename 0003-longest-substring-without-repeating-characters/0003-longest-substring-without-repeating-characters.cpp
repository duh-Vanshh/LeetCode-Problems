class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int len = s.size();
        int maxCount = 0;

        int l = 0;
        for (int r = 0; r < len; r++) {
            while (st.find(s[r]) != st.end()) {
                st.erase(s[l]);
                l++;
            }

            st.insert(s[r]);

            maxCount = max(maxCount, r - l + 1);
        }

        return maxCount;
    }
};