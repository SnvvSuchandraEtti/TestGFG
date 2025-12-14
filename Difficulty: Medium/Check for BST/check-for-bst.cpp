/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isBST(Node* root) {
        // code here
                return isBSTUtil(root, LLONG_MIN, LLONG_MAX);
    }
    
    bool isBSTUtil(Node* root, long long min, long long max) {
        if (!root) return true;
        if (root->data <= min || root->data >= max) return false;
        return isBSTUtil(root->left, min, root->data) && isBSTUtil(root->right, root->data, max);
        
    }
};