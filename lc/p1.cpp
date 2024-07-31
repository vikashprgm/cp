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
    vector<vector<int>> grid={{0,1,0},{1,0,1}};
    int row=grid.size();
    int col=grid[0].size();
    int u=INT_MAX,d=INT_MIN,l=INT_MAX,r=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(grid[i][j]==1){
               u=min(i+1,u);
               d=max(i+1,d);
               l=min(j+1,l);
               r=max(j+1,r);
            }
        }
    }
    long ans=(r-l+1)*(d-u+1);
    cout<<ans;
    if(ans<0) return 0;
    return ans;
}