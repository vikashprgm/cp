//author-v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n-1;i>=0;i--)
using ll=long long ;
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,t,p;
    cin>>n>>t>>p;
    vi arr(n);
    fo(n) cin>>arr[i];
    sort(arr.begin(),arr.end());
    int ans=0;
    for(int i=n-1;i>=n-p;i--) if(arr[i]<t) ans=max(ans,t-arr[i]);
    cout<<ans<<'\n';

}