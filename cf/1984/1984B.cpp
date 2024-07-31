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

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int tt;
    cin>>tt;
    while(tt--){
        long long n;
        cin>>n;
        bool cond=true;
        n%10<=8 && n%10>=0 ? cond=true:cond=false;
        int cnt=0;
        n/=10;
        while(n>=9){
            int x=n%10;
            n=n/10;
            if(x==0) cond=false;
        }
        if(n!=1) cond=false;
        cond? cout<<"YES" : cout<<"NO";
        cout<<'\n';
    }
}