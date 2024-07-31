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
        pint maxi={INT_MIN,0},mini={INT_MAX,0};
        fo(n) {
            cin>>a[i];
            if(a[i]<=mini.first) mini={a[i],i};
        }
        rfo(n-1){
            if(a[i]>=maxi.first) maxi={a[i],i};
        }

        if(maxi.second<mini.second){
            cout<<maxi.second+n-1-mini.second;
        }
        else{
            cout<<maxi.second+n-1-mini.second-1;
        }
    }
