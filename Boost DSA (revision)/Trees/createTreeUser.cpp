// Program to create a tree with user input ~ coded by Hiren
#include <iostream>
#include <cstdlib>
#include <vector>
#include <queue>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    // Init constructor
    TreeNode(int val, TreeNode* left = nullptr, TreeNode* right = nullptr) {
        this->val   = val;
        this->left  = left;
        this->right = right;    
    } 
};

// O(N) & O(LogN)
TreeNode* createTree(const vector<int>& vals, int start, int end) {
    if(start > end)
        return nullptr;

    int mid = start + (end - start) / 2;

    TreeNode* rootNode = new TreeNode(vals[mid]);
    rootNode->left  = createTree(vals, start, mid - 1);
    rootNode->right = createTree(vals, mid + 1, end);
    
    return rootNode;
}

// O(N) & O(N)
void printLevelOrder(TreeNode* rootNode) {
    if(!rootNode)
        return;

    queue<TreeNode*> q;
    q.push(rootNode);

    while(!q.empty()) {
        int qSize = q.size();
        cout << "[";

        for(int i = 1; i <= qSize; ++i) {    
            rootNode = q.front(); q.pop();
            cout << rootNode->val;
            if(i < qSize) cout << ", ";
            if(rootNode->left)  q.push(rootNode->left);
            if(rootNode->right) q.push(rootNode->right);
        }

        cout << "]\n";
    }
}

// O(N) & O(H)
TreeNode* deleteTree(TreeNode* rootNode) {
    if(!rootNode)
        return nullptr;

    rootNode->left  = deleteTree(rootNode->left);
    rootNode->right = deleteTree(rootNode->right);

    delete rootNode; 
    return nullptr;
}

// Driver code
int main() {
    bool userRunApp = true;

    while(userRunApp) {
        system("cls || clear");

        int n;
        cout << "Enter number of nodes to create: ";
        cin >> n;

        // Get value of n nodes
        vector<int> vals;
        for(int i = 1; i <= n; ++i) { 
            int key;
            cout << "Enter value of " << i << "th node: ";
            cin >> key;
            vals.push_back(key);
        }

        // Tree creation call
        TreeNode* rootNode = createTree(vals, 0, vals.size() - 1);

        // Print call
        cout << "\nThe BFS order of tree is: \n";
        printLevelOrder(rootNode);

        // Deletion call
        rootNode = deleteTree(rootNode);

        char userChoice;
        cout << "\nPress 'R' to restart application, else application will exit: ";
        cin >> userChoice;
        userRunApp = (userChoice == 'R');
    }

    return 0;
}