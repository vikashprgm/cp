#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    vi v={2,3,4};
    int e=1;
    sort(v.begin(),v.end());
    int l=0,r=v.size()-1;
    int points=0;
    while(e>=v[0] && l<=r){
        e-=v[l];
        if(v[l]>e) {
            e+=v[r];
            r--;
        }
        points++;
    }
    cout<<points;
}