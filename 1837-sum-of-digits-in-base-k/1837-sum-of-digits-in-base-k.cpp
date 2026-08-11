class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        int rem = 0;

        while (n != 0) {
            rem = n % k;
            n = n / k;

            sum += rem;
        }

        return sum;
    }
};