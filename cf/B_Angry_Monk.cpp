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

    int tt;
    cin>>tt;
    while(tt--){
        int s,k;
        cin>>s>>k;
        int arr[k];
        int cnt1=0,cntM=0;
        fo(k){
            cin>>arr[i];
            if(arr[i]==1) cnt1++;
            cntM=max(arr[i],cntM);
        }
        ll steps=2*(s-cntM)-(k-1);
        cout<<steps<<'\n';
        
    }
}