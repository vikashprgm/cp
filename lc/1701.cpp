#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
typedef long long ll;
#define pb push_back;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<vector<int>> a={{5,2},{5,4},{10,3},{20,1}};
    double ans=a[0][1]/a.size();
        int wl=a[0][0]+a[0][1];
        for(int i=1;i<a.size();i++){
            if(wl>a[i][0]) ans+=(wl-a[i][0]+a[i][1])/a.size();
            else ans+=a[i][1]/a.size();
            wl+=a[i][1];
            cout<<ans<<" "<<wl<<'\n';
        }

}