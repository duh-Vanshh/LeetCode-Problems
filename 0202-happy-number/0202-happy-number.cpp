class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> check;

        while (n > 1) {
            int sum = 0;

            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            n = sum;

            if (check.count(sum)) return false;
            else check.insert(sum);
        }

        return true;
    }
};