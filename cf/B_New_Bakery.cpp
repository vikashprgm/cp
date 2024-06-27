#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,a,b;
        cin>>n>>a>>b;
        long double k=(b-a+0.5);
        if(k<0){k=0;}
        if(k>=n){
            cout<<(n*b)-((n-1)*(n))/2<<endl;
            continue;
            }
        ll ans=b*k - (k*(k+1))/2 + k - k*a +n*a;
        cout<<ans<<endl;
    }
}