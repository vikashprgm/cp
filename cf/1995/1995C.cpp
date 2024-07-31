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
        vi a(n);
        bool con=true;
        fo(n){
            cin>>a[i];
        }
        int prev=a[0],steps=0;
        for(int i=1;i<n;i++){
            if(a[i]==1 && a[i-1]!=1) con=false;
            else{
                steps+=ceil(log(prev)/(2*log(a[i])));
                prev=a[i];
            }
        }
        con ? cout<<steps : cout<<-1;
        cout<<'\n';
    }
}