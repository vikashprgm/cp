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
        int a,b,c;
        cin>>a>>b>>c;
        int cnt=5;
        while(cnt--){
            if(a<b && a<c) a++;
            else if(b<c && b<a) b++;
            else if(c<a && c<b) c++;
            else (a <= b && a <= c) ? ++a : (b <= a && b <= c) ? ++b : ++c;
        }
        cout<<a*b*c<<'\n';

        
    }
}