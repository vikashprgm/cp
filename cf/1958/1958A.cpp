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

int f(int n,vector<int> &dp){
    if(n<0) return INT_MAX;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=min(f(n-3,dp),f(n-5,dp));
}
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        cout<<f(n,dp)<<endl;
    }
}