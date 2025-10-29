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

int totalSum(Node* root )
{
    if(root == nullptr) 
    return 0;

    if(root->left==nullptr && root->right == nullptr)
    {
        return 0;
    }

    return 1+totalSum(root->left) + totalSum(root->right);

}


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
    cout<<endl;
    int count=0;
    cout<<"Total count Number is : "<<totalSum(root);

    // cout<<"Total count of binary tree is : "<<count;
}