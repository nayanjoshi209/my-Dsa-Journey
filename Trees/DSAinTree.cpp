#include<iostream>
#include<vector>
using namespace std;

class treeNode
{
public:
    int data;
    treeNode* left;
    treeNode* right;

    treeNode(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

treeNode* buildTree()
{
    int vl;
    cout << "\nEnter the values of Node (-1 for nullptr): ";
    cin >> vl;

    if (vl == -1)
        return nullptr;

    treeNode* newNode = new treeNode(vl);

    cout << "\nEnter the left node of " << vl << ": ";
    newNode->left = buildTree();

    cout << "\nEnter the right node of " << vl << ": ";
    newNode->right = buildTree();

    return newNode;
}

// Recursive DFS function to populate level-wise vector
void dfsLevelOrder(treeNode* root, int level, vector<vector<int>>& levels)
{
    if (!root) 
    return;

    // Ensure the levels vector has a sub-vector for the current level
    if (levels.size() == level)
        levels.push_back({});

    levels[level].push_back(root->data);

    // Recurse left and right with level + 1
    dfsLevelOrder(root->left, level + 1, levels);
    dfsLevelOrder(root->right, level + 1, levels);
}

// DFS-based Level Order Traversal
void levelOrderDFS(treeNode* root)
{
    vector<vector<int>> levels;
    dfsLevelOrder(root, 0, levels);

    cout << "\nLevel Order Traversal (DFS-based):\n";
    for (const auto& level : levels)
    {
        for (int val : level)
            cout << val << " ";
        cout << endl;
    }
}

// Clean up memory
void deleteTree(treeNode* rootNode)
{
    if (rootNode)
    {
        deleteTree(rootNode->left);
        deleteTree(rootNode->right);
        delete rootNode;
    }
}

int main()
{
    treeNode* root = buildTree();

    levelOrderDFS(root);

    deleteTree(root);
    root = nullptr;

    return 0;
}
