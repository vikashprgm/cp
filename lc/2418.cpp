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
    vector<string> n={"Mary","John","Emma"};
    vi h={180,165,170};
    vector<pair<string,int>> v;
    for(int i=0;i<n.size();i++){
        v.push_back({n[i],h[i]});
    }
    sort(v.begin(), v.end(), [](auto &left,auto &right){return left.second>right.second;});
    fo(v.size()) cout<<v[i].second;
    vector<string> ans;
    fo(v.size()) ans.push_back(v[i].first);
}