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

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vi nums={};
    unordered_map<int,int> mpp;
    fo(nums.size()){
        mpp[nums[i]]++;
    }
    ListNode* head=new ListNode();
    
    while(head){
        if(mpp[head->val]!=0)head=head->next;
        else break;
    }

    ListNode* prev=head;
    ListNode* temp=head->next;
    while(temp){
        if(mpp[temp->val]!=0){
            if(temp->next!=nullptr){
            prev->next=temp->next;
            temp=temp->next;}
            else{
                prev->next=nullptr;
                temp=temp->next;
            }
        }
        else{
            temp=temp->next;
            prev=prev->next;
        }
    }
}