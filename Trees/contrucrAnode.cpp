// Program to create a binary tree with user input ~ coded by Hiren
#include <iostream>
#include <queue>
using namespace std;

class TreeNode { // Node template (user defined datatype)
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    // Init constructor
    TreeNode(int val, TreeNode* left, TreeNode* right) {
        this->val = val;
        this->left = left;
        this->right = right;
    }

    // Init destructor
    ~TreeNode() {
        if(left)  delete left;
        if(right) delete right;
    }
};

class Insertion {
public:
    // Method to insert a node in the binary tree - O(N) & O(1)
    TreeNode* constructBinaryTree(TreeNode* rootNode, int key) {
        // Edge case: If tree is empty then create a single node and return it
        if(!rootNode) 
            return new TreeNode(key, nullptr, nullptr);

        TreeNode* parent = nullptr;
        TreeNode* currNode = rootNode;

        while(currNode) { // Find the parent node of insert position
            parent = currNode;
            currNode = (key > currNode->val) ? currNode->right : currNode->left;
        }

        if(key > parent->val) 
            parent->right = new TreeNode(key, nullptr, nullptr); // If key is greater then insert at right side
        else 
            parent->left = new TreeNode(key, nullptr, nullptr); // Else insert at left side

        return rootNode;
    }
};

class PrintMethods {
public:
    // Method to print the level order traversal of tree using bfs - O(N) & O(N)
    void BFS(TreeNode* rootNode) {
        if(!rootNode)
            return;

        queue<TreeNode*> q;
        q.push(rootNode);

        while(!q.empty()) {
            cout<<"[";
            int qSize = q.size();
            for(int node = 1; node <= qSize; ++node) {
                rootNode = q.front(); q.pop();
                cout<<rootNode->val;
                if(node < qSize) cout<<", ";
                if(rootNode->left)  q.push(rootNode->left);
                if(rootNode->right) q.push(rootNode->right);
            }
            cout<<"]\n";
        }
    }

    // Method to print the tree using inorder traversal - O(N) & O(H)
    void inorder(TreeNode* rootNode) {
        if(rootNode) {
            inorder(rootNode->left);
            cout<<rootNode->val<<' ';
            inorder(rootNode->right);
        }
    }

    // Method to print the tree using preorder traversal - O(N) & O(H)
    void preorder(TreeNode* rootNode) {
        if(rootNode) {
            cout<<rootNode->val<<' ';
            preorder(rootNode->left);
            preorder(rootNode->right);
        }
    }

    // Method to print the tree using postorder traversal - O(N) & O(H)
    void postorder(TreeNode* rootNode) {
        if(rootNode) {
            postorder(rootNode->left);
            postorder(rootNode->right);
            cout<<rootNode->val<<' ';
        }
    }
};

// Driver code
int main() {
    int n;
    cout<<"Enter total number of nodes of binary tree: ";
    cin>>n;

    TreeNode* rootNode = nullptr;

    for(int i = 1; i <= n; ++i) { // Input node values and create the tree
        int key;
        cout<<"Enter the value of "<<i<<"th node: ";
        cin>>key;

        Insertion ins;
        rootNode = ins.constructBinaryTree(rootNode, key);
    }

    // Print call
    PrintMethods pm;
    cout<<"Inorder traversal of the tree is: ";
    pm.inorder(rootNode);
    cout<<'\n';

    // Print call
    cout<<"Preorder traversal of the tree is: ";
    pm.preorder(rootNode);
    cout<<'\n';

    // Print call
    cout<<"Postorder traversal of the tree is: ";
    pm.postorder(rootNode);
    cout<<'\n';

    // Print call
    cout<<"Level order traversal of the tree is:\n";
    pm.BFS(rootNode);

    // Deletion call (delete the entire tree recursively)
    delete rootNode; 
    rootNode = nullptr;

    return 0;
}