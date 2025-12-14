class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        // code here
                vector<int> result;
        unordered_set<int> seen;
        for (int num : arr) {
            if (seen.find(num) != seen.end()) {
                result.push_back(num);
            } else {
                seen.insert(num);
            }
        }
        return result;
        
    }
};
