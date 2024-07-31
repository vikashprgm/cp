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

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string c="";
    string s="aaaaaaaaaaaaaabb";
    int l=0,r=0;
    int cnt=0;
    while(r<s.size()){
        if(s[r]==s[l] && cnt<9){
            cnt++;
            if(r==s.size()-1){
                c+=to_string(cnt);
                c+=s[l];
            }
            r++;
        }
        else{
            c+=to_string(cnt);
            c+=s[l];
            cnt=0;
            l=r;
        }
    }
    cout<<c;
}