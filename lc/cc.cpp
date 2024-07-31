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

        int tonum(string s){
        long long ans=0;
        for(int i=0;i<s.size();i++){
            ans+=s[i]*pow(10,s.size()-i-1);
        }
        return ans;
    }
        int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        string s="000004322677566";
        string ans=s;
        int mini=tonum(s);
        for(int i=0;i<s.size()-1;i++){
            string t=s;
            if((t[i]+t[i+1])%2==0)swap(t[i],t[i+1]);
            if(tonum(t)<mini){
                cout<<mini<<'\n';
                ans=t;
                mini=tonum(t);
            }
        }
    
}