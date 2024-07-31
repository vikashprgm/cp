//author-v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n-1;i>=0;i--)
using ll=long long ;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<pint> v(n);
        fo(n){
            cin>>v[i].first;
        }
        fo(n){
            cin>>v[i].second;
        }
        int cnta=0,cntb=0;
        int scoreA=0,scoreB=0;
        //v.first=a ,v.second=b
        fo(n){
            if(v[i].first==1 && v[i].second==1) cnta++;
            else if(v[i].first==-1 && v[i].second==-1) cntb--;
            else{
                (v[i].first>=v[i].second)? scoreA+=v[i].first : scoreB+=v[i].second;
            }
        }
        cout<<cnta<<cntb;
        int l=abs(cnta)+abs(cntb);
        fo(l){
            if(cnta>0){
                if(scoreA>scoreB) scoreB++;
                else scoreA++;
                cnta--;
            }
            else if(cntb<0){
                if(scoreA>scoreB) scoreA--;
                else scoreB--;
                cntb++;
            }
            else break;
        }
    cout<<min(scoreA,scoreB)<<'\n';
    }
}