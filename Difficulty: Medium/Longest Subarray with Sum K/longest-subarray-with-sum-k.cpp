class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
                unordered_map<long long, int> sumIndex;
        long long prefix = 0;
        int maxLen = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            prefix += arr[i];
            
            if (prefix == k) {
                maxLen = i + 1;
            }
            
            if (sumIndex.find(prefix - k) != sumIndex.end()) {
                maxLen = max(maxLen, i - sumIndex[prefix - k]);
            }
            
            if (sumIndex.find(prefix) == sumIndex.end()) {
                sumIndex[prefix] = i;
            }
        }
        
        return maxLen;
        
    }
};