// author - v1kash
#include <bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin); 
  freopen("output.txt","w",stdout);
  #endif
long n,s;
cin>>n>>s;
if(n==1){
    int p;
    cin>>p;
    cout<<1<<'\n';
    cout<<1;
    return 0;
}
vector<pair<long,long>> v(n);
vector<pair<long,long>> ans;
for(int i=0;i<n;i++) {cin>>v[i].first;v[i].second=i+1;}
// 1 3 6 10 s=2
sort(v.begin(),v.end());
for(int i=1;i<v.size()-1;i++){
    if(v[i].first-v[i-1].first>s && v[i+1].first-v[i].first>s) ans.push_back(v[i]);
}
if(v[n-1].first-v[n-2].first>s) ans.push_back(v[n-1]);
if(v[1].first-v[0].first>s)ans.push_back(v[0]);
sort(ans.begin(), ans.end(), [](auto &left, auto &right) {
    return left.second < right.second;
});
cout<<ans.size()<<'\n';
for(int i=0;i<ans.size();i++){
    cout<<ans[i].second<<" ";
}

}