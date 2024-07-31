#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n-1;i>=0;i--)
using ll=long long;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n+1];
        fo(n) cin>>a[i];
        fo(n+1) cin>>b[i];
        bool con=false;
        int close=INT_MAX;
        ll steps=0;
        fo(n){
            if((b[n]>=b[i] && b[n]<=a[i]) ||(b[n]>=a[i] && b[n]<=b[i])) con=true;
            int mini=min(abs(b[n]-a[i]),abs((b[n]-b[i])));
            close=min(close,mini);
            steps+=abs(a[i]-b[i]);
        }
        if(con==true)cout<<steps+1<<"\n";
        else cout<<steps+1+close<<"\n";
    }
}