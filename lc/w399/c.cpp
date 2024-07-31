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
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vi a={1,3,4};
vi b={1,3,4};
int k=1;
int ans=0;
    fo(b.size())b[i]*=k;
    for(int i=0;i<a.size();i++){
        auto x=upper_bound(b.begin(),b.end(),a[i]);
        if(x!=b.begin()){
            for(auto it=b.begin();it!=x;it++){
            if(a[i]%(*it)==0) ans++;
            }
        }
    }
    cout<<ans;
}