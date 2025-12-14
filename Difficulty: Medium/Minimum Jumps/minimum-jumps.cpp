class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
                if (arr.size() == 1) return 0;
        if (arr[0] == 0) return -1;
        
        int jumps = 0, currentEnd = 0, farthest = 0;
        
        for (int i = 0; i < arr.size() - 1; i++) {
            farthest = max(farthest, i + arr[i]);
            
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;
                
                if (currentEnd >= arr.size() - 1) break;
            }
        }
        
        return (currentEnd < arr.size() - 1) ? -1 : jumps;
        
    }
};
