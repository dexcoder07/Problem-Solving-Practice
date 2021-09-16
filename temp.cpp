#include<bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* create()
{
    int x;
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    else{
        Node* new_node = new Node(x);
        new_node->left = create();
        new_node->right = create();
        return new_node;
    }
}


vector<vector<int>> levelorder(Node* root){
    vector<vector<int>> ans;
    if(root == NULL){
        return ans;
    }

    
}

int main(){


    
    return 0;
}