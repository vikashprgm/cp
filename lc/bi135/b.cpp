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
int finalsum(int n){
    if(n/3 + n%3 >=3) return finalsum(n/3 + n%3);
    return n/3 + n%3;
}
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    int sum=0;
    for(auto it:mpp){
        if(it.second>=3){
            sum+=finalsum(it.second);
        }
        else sum+=it.second;
    }
    cout<<sum;
}