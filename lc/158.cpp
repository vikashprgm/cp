// author-v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s="(ed(et(oc))el)";
    vector<vector<int>> v;
    stack<int> st;
    int cnt=0;
    fo(s.size()){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            v.push_back({st.top(),i});
            st.pop();
            cnt++;
        }

    }
    int n=v.size();
    for(int i=0;i<n;i++){
        int a=v[i][0],b=v[i][1]; 
        reverse(s.begin()+a+1,s.begin()+b);
    }
    for(int i=s.size();i>=0;i--){
        if(s[i]=='(' || s[i]==')') {
            s.erase(s.begin()+i);
        }
    }
}