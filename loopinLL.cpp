#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};

Node* create()
{
	Node* temp = NULL, *head = NULL;
	Node* new_node = NULL;

	int n;
	cin>>n;

	while(n--)
	{
		new_node = new Node;
		cin>>new_node->data;
		new_node->next = NULL;

		if(head==NULL)
		{
			head = new_node;
			temp = head;
		}
		else
		{
			temp->next = new_node;
			temp = temp->next;
		}
	}
	return head;
}



bool detectloop(Node* head){
    unordered_map<Node*, int> mp;

    Node* temp = head;
    int flag = 0;
    while(temp != NULL ){
        if(mp[temp]==1){
            flag = 1;
            break;
        }
        mp[temp]++;
    }

    if(flag == 0){
        return false;
    }
return true;
}
int main(){

    Node* head = create();
    if(detectloop(head)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}