class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        
                int count = 0, candidate = -1;
        
        for (int i = 0; i < arr.size(); i++) {
            if (count == 0) {
                candidate = arr[i];
            }
            count += (arr[i] == candidate) ? 1 : -1;
        }
        
        count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == candidate) count++;
        }
        
        return (count > arr.size() / 2) ? candidate : -1;
    }
};