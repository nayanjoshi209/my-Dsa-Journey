#include<iostream>
#include<queue>
#include<cstdlib>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node ( int val)
    {
        data  = val;
        left = right = nullptr;
    }
};

// bool wantToExpand()
// {
//     int x;
//     cout<<"\npress '0' to stop or other to continue to left & right : ";
//     cin>>x;

//     return x;
// }

Node* createTree()
{
    int nodeVal;
    cout<<"\nEnter the node value : (-1 to endNode) ";
    cin>>nodeVal;

    if(nodeVal == -1)
        return nullptr;

    Node* newNode = new Node(nodeVal);

    cout<<"\nFor Left : ";
    // if(wantToExpand())
        newNode->left = createTree();
   
    cout<<"\nFor Right : ";
    // if(wantToExpand())
        newNode->right = createTree();

    return newNode;
}

void printValues(Node* rootNode)
{
    queue<Node*>q;
    q.push(rootNode);

    while(!q.empty())
    {
        int size = q.size();

        for(int i=0;i<size;i++)
        {
            Node* curr = q.front();
            q.pop();

            cout<<curr->data<<" ";

            if(curr->left)
                q.push(curr->left);

            if(curr->right)
                q.push(curr->right);
        }
        cout<<endl;
    }
}

void getAverage(Node* root)
{
    queue<Node*>q;
    q.push(root);

    int index=0;
    while(!q.empty())
    {
        int size = q.size();
        int sum=0;
        int count=0;
        for(int i=0;i<size;i++)
        {
            Node* curr = q.front();
            q.pop();

            sum += curr->data;
            count++;

            if(curr->left)
                q.push(curr->left);

            if(curr->right)
                q.push(curr->right);
        }
        cout<<"\nFor level "<<index<<" average values is : "<<sum/count<<endl;
        index++;
    }
}

bool isRepete()
{
    int x;
    cout<<"\nEnter 1 to restart the Application or any to close applcation : ";
    cin>>x;

    return (x == 1) ? true : false;
}

int main()
{
    bool restart;
    restart = true;
    
    while(restart)
    {
        system("cls || clear" );
        
        // int x;
        // cout<<"Enter the size of tree : ";
        // cin>>x;
        
        Node* rootNode = createTree();
        
        cout<<"/\nPrint values by Level Wise : \n";
        printValues(rootNode);
        
        cout<<"\nAvrage values by levelWise : \n ";
        getAverage(rootNode);

        restart = isRepete();
    }
    return 0;
}