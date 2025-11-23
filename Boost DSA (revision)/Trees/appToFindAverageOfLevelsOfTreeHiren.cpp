// Appliaction to find averages of levels of a binary tree ~ coded by Hiren
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
    
    TreeNode(int val) {
        this->val   = val;
        this->left  = nullptr;
        this->right = nullptr;
    }
};

class FindAverageLeveLWise {
    using P = pair<int, int> ;

    void DFS(TreeNode* rootNode, int level, vector<P>& sumAndCount, vector<int>& avgLeveLWise) {
        if(!rootNode)
            return;

        if(sumAndCount.size() == level) { // If level is seen for first time
            sumAndCount.push_back({0, 0});
            avgLeveLWise.push_back(0);
        }

        auto& [currLeveLSum, totalNodes] = sumAndCount[level];
        currLeveLSum += rootNode->val; 
        totalNodes++;

        avgLeveLWise[level] = currLeveLSum / totalNodes;

        DFS(rootNode->left, level + 1, sumAndCount, avgLeveLWise);
        DFS(rootNode->right, level + 1, sumAndCount, avgLeveLWise);
    }

    vector<int> BFS(TreeNode* rootNode) {
        if(!rootNode)
            return {};

        queue<TreeNode*> q;
        q.push(rootNode);
        vector<int> avgLeveLWise;

        while(!q.empty()) {
            int qSize = q.size();
            int totalNodes = qSize;
            int currLeveLSum = 0;

            while(qSize--) {
                rootNode = q.front(); q.pop();
                if(rootNode->left)  q.push(rootNode->left);
                if(rootNode->right) q.push(rootNode->right);
                currLeveLSum += rootNode->val;
            }

            avgLeveLWise.push_back(currLeveLSum / totalNodes);
        }

        return avgLeveLWise;
    }

public:
    vector<int> averageOfLevels(TreeNode* rootNode) {
        vector<P> sumAndCount; // Stores {sumOfLevel, totalNodesAtLevel}
        vector<int> avgLeveLWise;
        DFS(rootNode, 0, sumAndCount, avgLeveLWise);
        return avgLeveLWise;
    }
};

class CreateBinaryTree {
    char getUserChoice(char button, string& rootPath) {
        char choice;
        cout << "Press '" << button << "' to move to [" << rootPath << "]: ";
        cin >> choice;
        return choice;
    }

public:
    TreeNode* createTree(string rootPath) {
        int key;
        cout << "\nEnter value of [" << rootPath << "] (-1 for endpoint): ";
        cin >> key; 

        if(key == -1)
            return nullptr;

        TreeNode* rootNode = new TreeNode(key);

        // Left side
        string leftPath = rootPath + " -> left";
        if(getUserChoice('L', leftPath) == 'L') {
            rootNode->left = createTree(leftPath);
        }

        // Right side
        string rightPath = rootPath + " -> right";
        if(getUserChoice('R', rightPath) == 'R') {
            rootNode->right = createTree(rightPath);
        }

        return rootNode;
    }
};

void printLeveLOrder(TreeNode* rootNode) {
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
        system("cls");

        // Tree creation call
        CreateBinaryTree cbt;
        TreeNode* rootNode = cbt.createTree("root");

        // Print call
        cout << "\nLevel order traversal of tree:\n";
        printLeveLOrder(rootNode);

        // Calculate averages
        FindAverageLeveLWise solution;
        vector<int> avgLeveLWise = solution.averageOfLevels(rootNode);

        // Print averages
        cout << "\nAverages level wise:\n";
        for(const int avg : avgLeveLWise) {
            cout << avg << '\n';
        }

        // Deletion call
        rootNode = deleteTree(rootNode);

        char userChoice;
        cout << "\nPress 'R' to restart the application, else it will exit: ";
        cin >> userChoice;
        userRunApp = (userChoice == 'R');
    }

    return 0;
}