#include <bits/stdc++.h>
using namespace std;
#define fo(n) for (int i = 0; i < n; i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

public:
    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    cout<<root->left->data;

}
void preorder(Node *root)
{
    // Node,left, right;
    if (root == NULL)
        return;
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    // left,right,Node;
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}
void inorder(Node *root)
{
    // left,Node,right
    if (root == NULL)
        return;
    postorder(root->left);
    cout << root->data;
    postorder(root->right);
}


int LevelOrder(Node*head){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> ans;
    queue<Node*> q;
    q.push(head);

    while(q.size()){
        int n=q.size();
        vector<int> level;

        for(int i=0;i<n;i++){
            Node* node=q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return 0;
}


vector<int> inorderloop(Node* Head){
    vector<int> ans;
    stack<Node*> s;
    Node* node=Head;
    while(true){
        if(node!=NULL){
            s.push(node);
            node=node->left;
        }
        else{
            if(s.empty()) break;
            node=s.top();
            ans.push_back(node->data);
            node=node->right;
        }
        

        
    }
    return ans;

}

vector<int>iterativepreorder(Node* Head){
    vector<int> ans;
    stack<Node*> s;
    Node* root=Head;
    s.push(root);
    while(!s.empty()){
        root=s.top();
        ans.push_back(root->data);
        s.pop();
        if(root->right){
            s.push(root->right);
        }
        if(root->left){
            s.push(root->left);
        }
    }
    return ans;

}

vector<int> iterativePostOrder2stack(Node* Head){
    vi ans;
    stack<Node*> s1;
    stack<Node*> s2;
    Node* root=Head;
    s1.push(root);
    while(!s1.empty()){
        root=s1.top();
        s1.pop();
        s2.push(root);
        if(root->left) s1.push(root->left);
        if(root->right) s1.push(root->right);
    }
    while(!s2.empty()){
        ans.push_back(s2.top()->data);
        s2.pop();
    }
    return ans;
}

vector<int> iterativepostorder1stack(Node* Head){
    vi ans;
    stack<Node*>s;
    Node* cur=Head;
    Node* temp;
    while(cur!=NULL && !s.empty()){
        if(cur){
            s.push(cur);
            cur=cur->left;
        }
        else
            temp=s.top()->right;
            if(temp==NULL){
                temp=s.top();
                s.pop();
                ans.push_back(temp->data);
                while(!s.empty() && temp==s.top()->right){
                    temp=s.top();
                    s.pop();
                    ans.push_back(temp->data);
                }
            }
            else cur=temp;
    }
    return ans;
}
int maxdepthleft(Node *root){
    if(root=nullptr) return 0;
    return 1+maxdepthleft(root->left);
}
int maxdepthright(Node *root){
    if(root=nullptr) return 0;
    return 1+maxdepthright(root->right);
} 
bool balancedbinarytree(Node *root){
    if(root==nullptr) return true;
        int l=maxdepthleft(root->left);
        int r=maxdepthright(root->right);
        if(abs(l-r)>1) return false;
        bool left=balancedbinarytree(root->left);
        bool right=balancedbinarytree(root->right);
    if(!left || right) return false;
    return true;
}

bool balancedtree(Node* root){
    return dfs(root)!=1;
}
int dfs(Node* root){
    if(root==nullptr) return 0;
    int l=dfs(root->left);
    //ensures if at any point l==-1, we already
    //have discovered an unbalanced tree, so
    // no need to go further;
    if(l==-1) return -1; 
    int r=dfs(root->right);
    if(r==-1) return -1;
    if(abs(l-r)>1) return -1;
    return 1+max(l,r);

}

