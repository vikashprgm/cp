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
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
    vi a={2,3,5};
    int n=a.size(),ls=0,rs=0;
        fo(n) ls+=a[i];
        

        vi ans(n,0);
        rfo(n){
            ls-=-a[i];
            cout<<ls<<" ";
            ans[i]=i*a[i] - ls + rs - (n-i-1)*a[i];
            rs+=a[i];
            cout<<rs<<" "<<endl;
        }
}