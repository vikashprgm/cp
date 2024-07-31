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
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vi a(n);
        int ans=INT_MIN;
        fo(n){
            cin>>a[i];
            if((i+1)%2!=0) ans=max(ans,a[i]);
        }
        cout<<ans<<'\n';
        
    }
}