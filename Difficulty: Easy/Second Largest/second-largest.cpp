class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int first = -1, second = -1;
        for (int num : arr) {
            if (num > first) {
                second = first;
                first = num;
            } else if (num > second && num != first) {
                second = num;
            }
        }
        return second;
    
        
    }
};