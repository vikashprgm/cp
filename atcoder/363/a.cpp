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

      int n;
      cin>>n;
      bool c1=0,c2=0,c3=0;
      if(n>=1 && n<=99) c1=1;
      else if(n>=100 && n<= 199) c2=1;
      else if(n>=200 && n<=299) c3=1;
      int ans=0;
      c1 ? ans=100-n : ans=ans;
      c2 ? ans=200-n : ans=ans;
      c3 ? ans=300-n : ans=ans;
      cout<<ans<<'\n';
        
}