#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

string remove(string &s,string vip,int val,int &ans){
        stack<char> st;
        for(auto it:s){
            if(it==vip[1] && !st.empty() && st.top()==vip[0]){
                st.pop();
            }
        
        else {
            st.push(it);
        }
        }
    string t="";
        while(st.size()){
            t+=st.top();
            st.pop();
            }
    reverse(t.begin(),t.end());
    ans+=(val*(s.size()-t.size()))/2;
    fo(t.size()) cout<<t[i];
    cout<<'\n';
    return s;
}

    int main() {
        string s="cdbcbbaaabab";
        int x=4, y=5;
        int ans=0;
        s=(y>=x)? remove(s,"ba",y,ans):remove(s,"ab",x,ans);
        s=(y<x)? remove(s,"ba",y,ans):remove(s,"ab",x,ans);
    }
