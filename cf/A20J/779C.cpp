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
    vi a(n);
    vi b(n);
    fo(n) cin>>a[i];
    fo(n) cin>>b[i];
    vector<pint> diff(n);
    fo(n){
        diff[i]={b[i]-a[i],i};
    }
    sort(diff.begin(),diff.end());
    int sum=0;
    for(int i=n-1;i>n-1-k;i--){
        sum+=a[diff[i].second];
    }
    for(int j=n-1-k;j>=0;j--){
        diff[j].first>=0 ? sum+=a[diff[j].second] : sum+=b[diff[j].second] ;
    }
    cout<<sum;
}