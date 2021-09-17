#include<bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {s
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

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        vector<int> level;
        int n = q.size();

        for(int i = 0 ; i < n ; i++){
            Node* cur = q.front();
            q.pop();
            if(cur->left){
                q.push(cur->left);
            }
            if(cur->right){
                q.push(cur->right);
            }
            level.push_back(cur->data);
        }
        ans.push_back(level);
    }

    return ans;
}

int main(){

    Node* head = create();

    vector<vector<int>> ans  = levelorder(head);

    for(auto it : ans){
        for(auto jt : it){
            cout << jt << " ";
        }
        cout << endl;
    }
    return 0;
}