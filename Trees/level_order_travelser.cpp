#include<iostream>
#include<queue>

using namespace std;

class Node
{
    public :
    int data;
    Node* left , *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;

    }
};

vector<int> levelOrder(Node* root , vector<int>&ans)
{
    queue<Node*>q;
    q.push(root);
    Node* temp;

    while(!q.empty())
    {
        temp = q.front();
        q.pop();

        ans.push_back(temp->data);

        // left exist
        if(temp->left)
        q.push(temp->left);

        // right exist
        if(temp->right)
        q.push(temp->right);

    }

    return ans;

};

int main()
{
    int x;
    cout<<"Enter the root elemant : \n";

    cin>>x;
    int frist,second;
    queue<Node*>q;
    
    Node* root=  new Node(x); 
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout<<"Enter the left value of "<<temp->data<<" : ";

        cin>>frist;

        // left Node
        if(frist!=-1)
        {
            temp->left = new Node(frist);
            q.push(temp->left);
        }
        // right Node
            cout<<"Enter the right value of "<<temp->data<<" : ";
            cin>>second;

            if(second!=-1)
            {
                temp->right = new  Node(second);
                q.push(temp->right);
            }

    }

    vector<int>ans;
    cout<<endl;
    levelOrder(root , ans);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

}