class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0: return bool(0)

        orignalNum = x
        newNum = 0

        while (x != 0):
            remainder = x % 10
            newNum = (newNum*10) + remainder
            x /= 10

        if orignalNum == newNum:
            return bool(1)

        return bool(0)