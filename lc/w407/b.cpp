// author - v1kash
#include<bits/stdc++.h>
using namespace std;
#define fo(n) for(int i=0;i<n;i++)
#define rfo(n) for(int i=n;i>=0;i--);
typedef long long ll;
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pint;

int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s="bbcd";
    bool a=true,b=true;
    int cnt=0,index=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            cnt++;
            index=i;
        }
    }
    if(cnt%2==0 && cnt!=0) b=!b;
    else if(cnt%2!=0 && index==s.size()-1 && cnt!=0) b=!b;
    else a=!a;
    a==true ? cout<<"Alice" : cout<<"Bob"; 
}