class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++) {

            string str = to_string(i);
            int n = str.length();

            if (n % 2 != 0) {
                continue;
            }

            int sum = 0;

            for (int j = 0; j < n; j++) {
                if (j < (n / 2)) {
                    sum += str[j] - '0';

                } else {
                    sum -= str[j] - '0';
                }
            }
            if (sum == 0) {
                count++;
            }
        }

        return count;
    }
};