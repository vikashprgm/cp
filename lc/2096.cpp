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

struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
bool find(TreeNode* root,int val,string &ans){
    if(root==nullptr) {
        return false;
    }
    else if(root->val==val) {
        return true;
    }
    ans+="L";
    if(find(root->left,val,ans)) return true;
    ans.pop_back();

    ans+="R";
    if(find(root->right,val,ans)) return true;
    ans.pop_back();

    return false;
    
}
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    TreeNode* root=new TreeNode(5);
    root->left=new TreeNode(1);
    root->right=new TreeNode(2);
    root->left->left=new TreeNode(3);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(4);
    root->right->left->left=new TreeNode(7);
    root->right->right->right=new TreeNode(8);
    int start=7,dest=8;
    string rxi="";
    string rxf="";
    find(root,start,rxi);
    find(root,dest,rxf);
    int index=0;
    for(int i=0;i<min(rxi.size(),rxf.size());i++){
        if(rxi[i]==rxf[i]){
            index++;
        }
        else break;
    }
    rxi.erase(rxi.begin(),rxi.begin()+index);
    rxf.erase(rxf.begin(),rxf.begin()+index);
    fo(rxi.size()) rxi[i]='U';
    string ans=rxi+rxf;
    cout<<rxi<<" "<<rxf<<'\n';
    cout<<ans;

    
}