class Solution {
public:
    int mySqrt(int x) {
        if (x == 2) return 1;
        int low = 0;
        int high = x;
        int ans = 0;

        while (low <= high) {
            long mid = (low + high) / 2;

            if (mid*mid <= x) {
                ans = mid;
                low = mid + 1;
            } else{
                high = mid - 1;
            }
        }

        return ans;
    }
};
int init = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ofstream out("user.out");
    cout.rdbuf(out.rdbuf());

    Solution s;
    for (string line; getline(cin, line); cout << endl)    
            cout << s.mySqrt(stoul(line));    
    exit(0);
    return 0;
}();
