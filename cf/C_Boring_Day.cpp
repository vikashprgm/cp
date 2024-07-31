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
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        int a[n];
        fo(n){
            cin>>a[i];
        }
        int win=0;
        int sum=0,i=0,j=0;
        
        while(j<=n){
            if(sum<l && j<n){
                sum+=a[j];
                j++;
            }
            else if(sum>=l && sum<=r){
                win++;
                i=j;
                sum=0;
            }
            else{
                sum-=a[i];
                if(i<j) i++;
                else j++;
            }
        }
    cout<<win<<endl;
        
    }
}