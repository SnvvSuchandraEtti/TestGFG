class Solution:
    def checkStatus(self, a, b, flag):
        if not flag:
            return (a >= 0) != (b >= 0)
        else:
            return a < 0 and b < 0