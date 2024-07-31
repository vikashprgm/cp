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
    bool even=false;
    long long req;
    if(n%4==0 || (n+1)%4==0){
        even=true;
        if(n%4==0){
            int x1=n/4;
            req=(n+1)*x1;
        }
        else{
            int x1=(n+1)/4;
            req=(n)*x1;
        }
    }
    else{
        int x1,x2;
        if(n%2==0){
            x1=n/2;
            x2=n;
            req=x1*x2;
            req/=2;
        }
        else{
            x1=(n+1)/2;
            x2=n;
            req=x1*x2;
            req/=2;
        }
    }
    vi ans;
    int t=n;
    while(req>0){
        ans.push_back(t);
        req-=t;
        if(req<t){
            t=req;
        }
        else t-=1;
    }
    even? cout<<0<<'\n':cout<<1<<'\n';
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<" ";
    fo(ans.size()) cout<<ans[i]<<" ";
}