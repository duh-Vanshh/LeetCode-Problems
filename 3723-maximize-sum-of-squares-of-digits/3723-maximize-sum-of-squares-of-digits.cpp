class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum == 0 || sum > 9 * num) {
            return "";
        }

        int nines = sum / 9;
        int rem = sum % 9;
        int zeros = num - nines - (rem > 0 ? 1 : 0);

        string ans = "";

        ans.append(nines, '9');
        if (rem > 0) {
            ans += to_string(rem);
        }
        ans.append(zeros, '0');

        return ans;
    }
};