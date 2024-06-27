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

int diameter(Node* root){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    if(root==nullptr) return 0;
    int diameter=0;
    height(root,diameter);
    return diameter;
}
    int height(Node* node, int& diameter){
        if(!node) return 0;
        int lh=height(node->left,diameter);
        int rh=height(node->right,diameter);
        diameter=max(diameter,lh+rh);
        return 1+max(lh,rh);
    }