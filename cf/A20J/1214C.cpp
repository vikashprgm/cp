//author-v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n;i>=0;i--)
using ll=long long ;
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<n;i++){
        if(s[i]=='(') st.push(s[i]);

        else if((s[i]==')')){
            if(st.size()==0){
                st.push(s[i]);
            }
            else if(st.top()=='(') st.pop();
            else st.push(s[i]);
        }
    }
    bool cond=false;
    if(st.size()==2){
        char x=st.top();
        st.pop();
        char y=st.top();
        if((x=='(' && y==')') || y=='(' && x==')' ) cond=true;
    }
    if(st.size()==0) cond=true;
    cond? cout<<"Yes" : cout<<"No";
}