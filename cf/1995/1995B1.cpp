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
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        vi a(n);
        fo(n) cin>>a[i];
        sort(a.begin(),a.end());
        int r=n-1,l=n-1;
        int sum=0;
        int ans=0;
        while(l>=0 && r>=0){
            if(a[r]-a[l]<=1 && a[l]+sum<=k){
                    sum+=a[l];
                    l--;
            }
            else{
                if(a[r]-a[l]<=1 && sum+a[l]-1==k){
                    sum+=a[l];
                    sum-=a[r];
                    r--;
                }
                else{
                    sum=0;
                    r=l;
                }
            }
            ans=max(sum,ans);
        }
        cout<<ans<<'\n';
    }
}