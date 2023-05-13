#include <iostream>

using namespace std;

// Binary Search Tree Node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Binary Search Tree Class
class BST {
public:
    TreeNode *root;
    BST() {
        root = NULL;
    }

    // Insert Node in Binary Search Tree
    TreeNode* insert(TreeNode* root, int val) {
        if (root == NULL) {
            return new TreeNode(val);
        }
        if (val < root->val) {
            root->left = insert(root->left, val);
        } else {
            root->right = insert(root->right, val);
        }
        return root;
    }

    // Traverse Binary Search Tree
    void traverse(TreeNode* root) {
        if (root != NULL) {
            traverse(root->left);
            cout << root->val << " ";
            traverse(root->right);
        }
    }
};

int main() {
    BST bst;
    bst.root = bst.insert(bst.root, 10);
    bst.insert(bst.root, 5);
    bst.insert(bst.root, 20);
    bst.insert(bst.root, 3);
    bst.insert(bst.root, 8);
    bst.insert(bst.root, 15);
    bst.insert(bst.root, 25);

    cout << "In-Order Traversal of Binary Search Tree: ";
    bst.traverse(bst.root);

    return 0;
}

