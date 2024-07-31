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
        int n;
        cin>>n;
        vi arr(n,0);
        fo(n){
            int x;
            cin>>x;
            arr[i]=x;
        }
        vi temp=arr;
        sort(arr.begin(),arr.end());
        if(arr[n-1]==temp[n-1]) cout<<arr[n-2]<<'\n';
        else cout<<arr[n-1]<<'\n';
    }
}