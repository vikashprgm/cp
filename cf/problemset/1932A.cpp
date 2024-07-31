//author-v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n-1;i>=0;i--)
using ll=long long ;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int maxsum(string v,int x){
    int val;
    if(x>v.size()-1) return 0;
    if(v[x]=='*') val= -1;
    else if(v[x]=='.') val= 0;
    else val=1;
    int sum=val + max(maxsum(v,x+1),maxsum(v,x+2));
    return sum;
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<maxsum(s,0)<<'\n';
        
    }
}