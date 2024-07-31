// author - v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n;i>=0;i--);
typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;
typedef unordered_map<int,int> umap;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
    TreeNode* treemaker(unordered_map<int,pint> mpp,TreeNode* &root,int leaf){
        if(mpp[leaf].first!=0) root->left=treemaker(mpp,root,mpp[leaf].first);
        else if(mpp[leaf].first==0){
            root->left=new TreeNode(leaf);
            return root;
        }
        else if(mpp[leaf].second!=0) root->right=treemaker(mpp,root,mpp[leaf].second);
        else if(mpp[leaf].second!=0){
            root->right=new TreeNode(leaf);
            return root;
        }
        return root; 
    }


int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<vi> a={{20,15,1},{20,17,0},{50,20,1},{50,80,0},{80,19,1}};
    unordered_map<int,pint> mpp;
    unordered_map<int,int> findking;
    fo(a.size()){
        if(a[i][2]==0){
            mpp[a[i][0]].second=a[i][1];
        }
        else{
            mpp[a[i][0]].first=a[i][1];
        }
        findking[a[i][1]]=a[i][0];
    }

    int root=findking.begin()->second;
    while(true){
        if(findking[root]!=0) {
            root=findking.find(root)->second;
        }
        else break;
    }
    TreeNode* ans=new TreeNode(root);
    treemaker(mpp,ans,root);

}
    // for(auto it:mpp){
    //     cout<<it.first<<" ";
    //     cout<<it.second.first<<" "<<it.second.second<<'\n';
    // }