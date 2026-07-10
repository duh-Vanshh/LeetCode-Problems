class Solution {
public:
    int mySqrt(int x) {
        if (x == 2) return 1;
        long i = 1;
        while ((i*i) != x) {
            if ((i*i) == x) {
                break;
            } else if ((i*i) > x) {
                i -= 1;
                break;
            }
            i++;
        }

        return i;
    }
};