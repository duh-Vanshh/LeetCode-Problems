class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int orignalNum = x;
        long reversedNum = 0;
        while (x > 0) {
            int lastDigit = x % 10;
            reversedNum = (reversedNum*10) + lastDigit;
            x /= 10;
        }

        return orignalNum == reversedNum;

        return 0;
    }
};