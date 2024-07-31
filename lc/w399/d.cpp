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

int nonadjsum(vector<int> a,vector<int>&dp,int n){
    if(n==0) return a[0];
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int pick1=a[n];
    int pick2=a[n-2];
    int pick3=a[n]+a[n-2];
    int pick4=a[n-1];
    return dp[n]=max(max(pick1,pick2),max(pick3,pick4));
}
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vi v={0,-1};
    vector<vi>q={{0,-5}};
    long long sum=0;
    for(int i=0;i<q.size();i++){
        vector<int> dp(v.size(),-1);
        v[q[i][0]]=q[i][1];
        int temp=nonadjsum(v,dp,v.size()-1);
        temp<0 ? sum+=0 : sum+=temp ;
    }
    cout<<sum;
    return sum;
}