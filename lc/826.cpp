#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;
bool compare(pint p1, pint p2) {
    return p1.second<p2.second;
}
int main(){
    vi dif={68,35,52,47,86};
    vi pro={67,17,1,81,3};
    vi wor={92,10,45,47,85,86,87};
    vector<pint> pair;
    fo(dif.size()){
        pair.emplace_back(dif[i],pro[i]);
    }
    sort(pair.begin(),pair.end());
    //find lower bound of ability
    //find lower bound of profit;
    int ans=0;
    for(int i=0;i<wor.size();i++){
        auto flag=lower_bound(pair.begin(),pair.end(),make_pair(wor[i],INT_MAX))-pair.begin();
        if(flag>0) {
            vector<pint> profit=pair;
            sort(profit.begin(),profit.begin()+flag-1,compare);
            cout<<profit[flag-1].second<<" ";
        }
        else {
        ans=pair[0].second;
        cout<<ans<<" ";
        }
        cout<<flag<<" \n";
}
}