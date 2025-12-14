class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // add code here.
                int left = 0, right = a.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (a[mid] == b[mid]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
};