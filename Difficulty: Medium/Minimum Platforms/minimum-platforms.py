class Solution:    
    def minPlatform(self, arr, dep):
        # code here
                # Sort the arrival and departure times
        arr.sort()
        dep.sort()
        
        platforms = 1
        max_platforms = 1
        i = 1  # pointer for arrival
        j = 0  # pointer for departure
        
        # Process arrivals and departures
        while i < len(arr) and j < len(dep):
            if arr[i] <= dep[j]:
                # A train is arriving before another departs
                platforms += 1
                i += 1
            else:
                # A train is departing before another arrives
                platforms -= 1
                j += 1
            
            # Track the maximum platforms needed
            max_platforms = max(max_platforms, platforms)
        
        return max_platforms
        
        