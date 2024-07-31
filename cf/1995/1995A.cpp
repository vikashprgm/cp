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
        int n,k;
        cin>>n>>k;
        vi take;
        take.pb(n);
        for(int i=n-1;i>=1;i--){
            take.pb(i);
            take.pb(i);
        }
        int cnt=0,sum=0,j=0;
        while(true){
            if(sum<k){
                sum+=take[j];
                cnt++;
            }
            else break;
            j++;
        }
        cout<<cnt<<'\n';
    }
}