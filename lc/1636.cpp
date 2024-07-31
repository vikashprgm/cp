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
    vi v={-1,1,-6,4,5,-6,1,4,1};
    unordered_map<int,int> mpp;
    for(auto it:v) mpp[it]++;
    
    vector<pair<int,int>> a;
    for(auto it:mpp) a.push_back({it.second,it.first});
    sort(a.begin(),a.end(),[](auto &left, auto &right) {return (left.first==right.first)? left>right : left.first<right.first;});
    // fo(a.size()) cout<<a[i].first<<" "<<a[i].second<<'\n';
    vi ans;
    for(int i=0;i<a.size();i++){
        while(a[i].first--){
        ans.emplace_back(a[i].second);
        } 
    }
    fo(ans.size()) cout<<ans[i]<<" "; 
    return 0;
}