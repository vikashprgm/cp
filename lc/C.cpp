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
    vi v={1,1,0,1};
    int k=4;
    fo(k-1) v.push_back(v[i]);
    int l=0,r=1;
    int ans=0;
    int cnt=0;
    while(r<v.size()){
        if(v[r]!=v[r-1]){
            cnt++;
            r++;
            if(cnt==k-1){
                ans++;
                cnt--;
                l++;
            }
        }
        else{
            l=r;
            r++;
            cnt=0;
        }
    }
    cout<<ans;

    
}