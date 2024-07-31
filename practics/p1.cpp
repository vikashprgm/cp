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

    int n,s;
    cin>>n>>s;
    int arr[n];
    fo(n){
        cin>>arr[i];
    }
    set <int> ans;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(abs(arr[i]-arr[j])<=s && i!=j) {
                cnt++;
                break;
        }}
        if(cnt==0)ans.insert(i+1);
    }
    cout<<ans.size()<<'\n';
    for(auto it=ans.begin();it!=ans.end();it++) cout<<*it<<" ";
}