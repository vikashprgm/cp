#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;
class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

void nodebasic(){
    vi arr={1,2,3,4};
    Node* y=new Node(arr[0],nullptr);
    // cout<<y<<"\n";
    // cout<<y->data<<"\n";
    //or
    Node x= Node(arr[0],nullptr);
    Node*a=&x;
    // cout<<a<<"\n";
    // cout<<x.data<<"\n";
}

Node* convert(vi &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* removeKth(Node* head,int k){
    if(k==1){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head; }

    int cnt=0;
    Node*temp=head;
    Node*prev=NULL;
    while(temp){
        cnt++;
        if(cnt==k){
            prev->next=temp->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head ;

}


int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt" ,"r" ,stdin) ;
freopen("output.txt", "w", stdout);
#endif
    vi arr={1,2,3,4};
    Node* head= convert(arr);
    head = removeKth(head,2);
    print(head);
}