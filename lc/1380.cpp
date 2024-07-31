// author - v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n;i>=0;i--);
typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<vi> v={{3,7,8},{9,11,13},{15,16,17}};
    vector<int> maxcol(v[0].size(),-1);
        vector<pair<int,int>> minrow;
        for(int i=0;i<v.size();i++){
            int mini=INT_MAX;
            pair<int,int> p;
            for(int j=0;j<v[i].size();j++){
                if(v[i][j]<mini){
                    mini=v[i][j];
                    p={mini,j};
                }
                maxcol[j]=max(maxcol[j],v[i][j]);
            }
            minrow.push_back(p);
            mini=INT_MAX;
        }
    fo(minrow.size()) cout<<minrow[i].first<<" "<<minrow[i].second<<'\n';
    fo(maxcol.size()) cout<<maxcol[i]<<'\n';
    
    vector<int> ans;
    for(int i=0;i<v.size();i++){
        if(maxcol[minrow[i].second]==minrow[i].first){
            ans.push_back(minrow[i].first);
        }
    }
}