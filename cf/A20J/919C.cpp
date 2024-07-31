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
    int n,m,k;
    cin>>n>>m>>k;
    vector<string> a(n);
    vi r;int cell;
    int ans=0;
    for(int i=0;i<n;i++){
        cell=0;
        cin>>a[i];
        for(int j=0;j<m;j++){
            if(a[i][j]!='*') cell++;
            else {
                if(cell>=k) ans+=cell-k+1;
                cell=0;
            }
        }
        if(cell>=k) ans+=cell-k+1;
    }
    vi c;int row;
    for(int i=0;i<m;i++){
        row=0;
        for(int j=0;j<n;j++){
            if(a[j][i]!='*') row++;
            else {
                if(row>=k && k!=1) ans+=row-k+1;
                row=0;
            }
        }
        if(row>=k && k!=1) ans+=row-k+1;
    }
    cout<<ans;
}