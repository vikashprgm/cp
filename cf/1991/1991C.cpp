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

void change(vi &a ,int n){
    fo(a.size()) a[i]=abs(a[i]-n);
}

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vi a(n);
        fo(n) cin>>a[i];
        vi ans;
        if(n==1){
            cout<<1<<'\n';
            cout<<a[0]<<'\n';
            continue;
        }
        fo(n-1){
            if(a[i]==a[i+1]) continue;
            int avg=(a[i]+a[i+1])/2;
            ans.push_back(avg);
            change(a,avg);
        }
    if(a[n-1]!=0) ans.push_back(a[n-1]);
    bool cond=true;
    fo(n-1) if(a[i]!=a[i+1]) cond=false;
    if(cond){
        cout<<ans.size()<<'\n';
        fo(ans.size()) cout<<ans[i]<<" ";
        
    }
    else cout<<-1;
    cout<<'\n';
    }
}