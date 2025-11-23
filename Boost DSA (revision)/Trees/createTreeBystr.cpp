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

char getUserChoice(char dir, string side, string& rootPath) {
    char choice;
    cout << "Press '" << dir << "' to move to " << side << " side of (" << rootPath  << "): ";
    cin >> choice;
    return choice;
}

// O(N) & O(N*N)
TreeNode* createTree(string rootPath) {
    int val;
    cout << "Enter value of " << rootPath << " (-1 for endpoint): ";
    cin >> val;

    if(val == -1) {
        return nullptr;
    }

    TreeNode* rootNode = new TreeNode(val);

    // Left side
    string leftPath = rootPath + " -> left";
    if(getUserChoice('L', "left", leftPath) == 'L' ) {
        rootNode->left = createTree(leftPath);
    }
    
    // Right side
    string rightPath = rootPath + " -> right";
    if(getUserChoice('R', "right", rightPath) == 'R' ) {
        rootNode->right = createTree(rightPath);
    }

    return rootNode;
}

// O(N) & O(N)
TreeNode* createTreeOptimized(string& rootPath) {
    int val;
    cout << "Enter value of " << rootPath << " (-1 for endpoint): ";
    cin >> val;

    if(val == -1) {
        return nullptr;
    }

    // Left side
    TreeNode* rootNode = new TreeNode(val);
    rootPath += " -> left";
    if(getUserChoice('L', "left", rootPath) == 'L' ) {
        rootNode->left = createTreeOptimized(rootPath);
    }
    int charToRemove = 8;
    while(charToRemove-- > 0) rootPath.pop_back();
    
    // Right side
    rootPath += " -> right";
    if(getUserChoice('R', "right", rootPath) == 'R' ) {
        rootNode->right = createTreeOptimized(rootPath);
    }
    charToRemove = 9;
    while(charToRemove-- > 0) rootPath.pop_back();

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

        // #1 Tree creation call
        TreeNode* rootNode = createTree("root");

        // #2 Tree creation call
        // string rootPath = "root";
        // TreeNode* rootNode = createTreeOptimized(rootPath);

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