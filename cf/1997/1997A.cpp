//author-v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n;i>=0;i--)
using ll=long long ;
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//aaa
//adaa ->2+2+2+1
//aada -? 2+1+2+2
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        bool cond=false;
        int j;
        int n=s.size();
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                cond=true;
                j=i;
                break;
            }
        }
        if(cond){
            if(s[j]=='a') s.insert(s.begin()+j,'b');
            else  s.insert(s.begin()+j,'a');
            cout<<s<<'\n';
        }
        else{
            if(s[n-1]=='a') s+='b';
            else s+='a';
            cout<<s<<'\n';
        }
        
    }
}