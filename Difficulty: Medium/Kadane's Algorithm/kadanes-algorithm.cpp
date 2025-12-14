class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        
                int maxCurrent = arr[0];
        int maxGlobal = arr[0];
        
        for (int i = 1; i < arr.size(); i++) {
            maxCurrent = max(arr[i], maxCurrent + arr[i]);
            if (maxCurrent > maxGlobal) {
                maxGlobal = maxCurrent;
            }
        }
        
        return maxGlobal;
    }
};