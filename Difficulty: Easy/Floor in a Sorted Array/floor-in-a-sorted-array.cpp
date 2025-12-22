class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
                int left = 0, right = arr.size() - 1;
        int result = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] <= x) {
                result = mid;  // Store current index as it's a valid floor
                left = mid + 1;  // Continue looking for larger valid element
            } else {
                right = mid - 1;  // x is smaller, search left
            }
        }
        
        return result;
        
    }
};
