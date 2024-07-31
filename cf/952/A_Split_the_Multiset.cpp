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

    int tt;
    cin>>tt;
    while(tt--){
      int n,k;
        cin>>n>>k;
        if(n<=k){
            cout<<"0"<<'\n';
            continue;
        }
        vi a;
        int steps=0;
        int ele=n;
        for(int i=0;i<n;i+=k){
            int cnt=0;
            if(ele>k){
            int b=a.size();
            if(b>1){
                a.erase(a.begin()+b-1);
            }
            for(int j=1;j<k;j++){
                a.pb(k);
                cnt++;
            }
            if(ele - cnt*k>0) a.pb(ele - cnt*k);
            ele=a[a.size()-1];
            steps++;
            }
            else{
                if(ele==1)steps+=a.size()-1;
                else steps+=a.size();
                break;
            }
        }
    cout<<steps<<'\n';
        
    }
}
  