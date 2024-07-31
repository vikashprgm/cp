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

    vector<vector<int>> v;
    pint x;
    fo(5){
        vi t(5);
        for(int j=0;j<5;j++){
            cin>>t[j];
            if(t[j]==1) x={i,j};
        }
        v.push_back(t);
    }
    cout<<abs(x.first-2)+abs(x.second-2);

}