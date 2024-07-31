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

    int n;
    cin>>n;
    vi a(n);
    fo(n) cin>>a[i];
    sort(a.begin(),a.end());
    long sum=0;
    fo(n/2){
        sum+=pow((a[i]+a[n-i-1]),2);
    }
    cout<<sum;
}