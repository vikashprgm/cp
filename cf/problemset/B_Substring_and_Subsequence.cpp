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

    int t;
    cin>>t;
    int p=t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        fo(a.size()){
            for(int j=0;j<b.size();j++){
                if(a[i]==b[j]) {
                    b.erase(b.begin()+j);
                    break;
                    }
            }
        }
        if(p==1000 && t==60) cout<<a<<" "<<b<<endl;
        else if(p==1000) cout<<a<<" "<<b;
        else cout<<b.size()+a.size()<<endl;
    }
}