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
    vector<pair<int,pair<int,int>>> v={{{-2},{2,2}},{{-1},{1,1}},{{0},{0,0}},{{0},{2,3}}};
    vector<vector<int>>ans;
    int i=0,j=0;
    while(i<v.size()){
            int level=v[i].first;
            vector<int> hall;
            hall.push_back(v[i].second.second);
            for(j=i+1;j<v.size();j++){
                if(v[j].first==level){
                    hall.push_back(v[j].second.second);} 
                else {
                    i=j;
                    break;
                }
            }
            ans.push_back(hall);
            if(j==v.size()) break;
        }

    for(auto it:ans){
        for(int i=0;i<it.size();i++) cout<<it[i]<<" ";
        cout<<endl;
    }
}