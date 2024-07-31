#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
vi p={5,4,3,2,1,6,8,7,9,10};
vi h={2,17,9,15,10,20,25,30,5,10};
string d="RLRLRLRLRL";
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        vector<pair<pair<int,int>,pair<char,int>>> v;
        for(int i =0;i<p.size();i++){
            v.push_back({{p[i],h[i]},{d[i],i}});
        }
        sort(v.begin(),v.end());
        // fo(v.size()) cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second.first<<" "<<v[i].second.second<<'\n';
        
        stack<pair<pair<int,int>,pair<char,int>>> st;
        vector<pair<int,int>> ans;
        for(int i=0;i<v.size();i++){
            if(st.empty()){
                st.push(v[i]);
                continue;
            }
            auto top=st.top();
            if(top.second.first=='R'){
                if(v[i].second.first=='L'){// -> <-
                    if(top.first.second>v[i].first.second){
                        st.top().first.second--;
                        cout<<"a";
                    }
                    else if(top.first.second<v[i].first.second){
                        v[i].first.second--;
                        st.pop();
                        i--;
                        cout<<"b";
                        }
                    else{st.pop();cout<<"c";}
                }
                else { //-> ->
                    st.push(v[i]);
                    cout<<"d";
                }    
            }
            else{// <-
                if(v[i].second.first=='L'){//<- <-
                    st.push(v[i]);       
                    cout<<"e"; 
                }
                else { //<- ->
                    st.push(v[i]);
                    cout<<"f";
                }
            }
        }
        while(!st.empty()){
            ans.push_back({st.top().first.second,st.top().second.second});
            st.pop();
        }
        sort(ans.begin(),ans.end(),[](auto &left, auto &right) {
    return left.second < right.second;
});
    vector<int> res;
    fo(ans.size()) res.push_back(ans[i].first);
    fo(res.size()) cout<<res[i]<<'\n';

}