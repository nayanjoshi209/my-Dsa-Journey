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

void totalSum(Node* root , int &sum)
{
    if(root == nullptr) 
    return;

    sum++;
    totalSum(root->left,sum);
    totalSum(root->right,sum);

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
    int sum=0;
    totalSum(root , sum);

    cout<<"Total sum of binary tree is : "<<sum;
} 