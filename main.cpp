#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
}; // struct treenode

TreeNode * insert(TreeNode *root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    }else {
        root->right = insert(root->right, value);
    }
    return root;
}

void inOrderTraversal(TreeNode *root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout <<root->data<<" ";
        inOrderTraversal(root->right);
    }
}

int main() {
    TreeNode *root = nullptr;
    root = insert(root, 15);
    insert(root, 5);
    insert(root, 7);
    insert(root,6);
    insert(root, 10);

    cout << "In order Traversal: ";
    inOrderTraversal(root);
    cout << endl;
    return 0;

}