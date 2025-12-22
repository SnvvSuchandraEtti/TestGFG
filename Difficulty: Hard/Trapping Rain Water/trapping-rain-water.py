
class Solution:
    def maxWater(self, arr):
        # code here
                # Two pointer approach
        # Time: O(n), Space: O(1)
        if not arr or len(arr) < 3:
            return 0
        
        left = 0
        right = len(arr) - 1
        max_left = 0
        max_right = 0
        water = 0
        
        while left < right:
            if arr[left] < arr[right]:
                if arr[left] >= max_left:
                    max_left = arr[left]
                else:
                    water += max_left - arr[left]
                left += 1
            else:
                if arr[right] >= max_right:
                    max_right = arr[right]
                else:
                    water += max_right - arr[right]
                right -= 1
        
        return water