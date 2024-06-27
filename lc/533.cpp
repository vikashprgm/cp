#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(int k, int w, vector<int>& profits, vector<int>& capital){
    vector<pint> p;
    fo(capital.size()){
        p.emplace_back(capital[i],profits[i]);
    }
    sort(p.begin(),p.end());
    // {0,1},{1,2},{1,3}
    while(k--){
    for(int i=profits.size()-1;i>0;i--){
        if(w>=p[i].first){
            w+=p[i].second;
            p.erase(p.begin()+i);
        }
        if(p.size()==0) break;
    }
    }
    return w;

}