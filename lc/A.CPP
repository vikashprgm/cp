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

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vi v={0,0,0,1,1};
    v.push_back(v[0]);
    v.push_back(v[1]);
    int l=0,r=2;
    int ans=0;
    while(r<v.size()){
        if(v[l]==v[r] && v[l]!=v[l+1]) ans++;
        l++;
        r++;
    }
    cout<<ans;

    
}