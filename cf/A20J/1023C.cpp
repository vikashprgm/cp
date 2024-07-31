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

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    stack<char> st;
    string t;
    fo(n){
        if(t.size()==k) break;
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.empty()) st.push(s[i]);
            else{
                auto x=st.top();
                t+=x;
                t+=s[i];
            }
        }
    }
    cout<<t;

}