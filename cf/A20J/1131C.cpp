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
    vi inc;vi dec;
    if(n%2==0){
        fo(n/2){
            inc.push_back(a[2*i]);
            dec.push_back(a[2*i +1]);
        }
    }
    else{
        inc.push_back(a[0]);
        for(int i=1;i<=n/2;i++){
            inc.push_back(a[2*i]);
            dec.push_back(a[2*i - 1]);
        }
    }
    reverse(dec.begin(),dec.end());
    for(int i=0;i<inc.size();i++) cout<<inc[i]<<" ";
    for(int i=0;i<dec.size();i++) cout<<dec[i]<<" ";
}