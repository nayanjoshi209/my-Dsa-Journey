#include <iostream>

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val   = val;
        this->left  = nullptr;
        this->right = nullptr;
    }    
};

void printInorder(TreeNode* rootNode) {
    if(rootNode) {
        printInorder(rootNode->left);
        std::cout << rootNode->val << ' ';
        printInorder(rootNode->right);
    } 
}

void printPreorder(TreeNode* rootNode) {
    if(rootNode) {
        std::cout << rootNode->val << ' ';
        printPreorder(rootNode->left);
        printPreorder(rootNode->right);
    }
}

void printPostorder(TreeNode* rootNode) {
    if(rootNode) {
        printPostorder(rootNode->left);
        printPostorder(rootNode->right);
        std::cout << rootNode->val << ' ';
    }
}

void deleteTree(TreeNode* rootNode) {
    if(rootNode) {
        deleteTree(rootNode->left);
        deleteTree(rootNode->right);
        delete rootNode;
    }
}

// Driver code
int main() {
    std::ios_base::sync_with_stdio(NULL);
    std::cin.tie(nullptr);

    // Creating tree, connecting nodes and initializing their data
    TreeNode* rootNode = new TreeNode(1);
    rootNode->left = new TreeNode(2);
    rootNode->right = new TreeNode(3);
    rootNode->left->left = new TreeNode(4);
    rootNode->left->right = new TreeNode(5);
    rootNode->right->right = new TreeNode(6);

    std::cout << "The inorder traversal of tree is:\n";
    printInorder(rootNode);

    std::cout << "\nThe preorder traversal of tree is:\n";
    printPreorder(rootNode);

    std::cout << "\nThe postorder traversal of tree is:\n";
    printPostorder(rootNode);

    // Deletion call
    deleteTree(rootNode); 
    rootNode = nullptr;

    return 0;
}