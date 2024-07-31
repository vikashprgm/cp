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
vi n1;
vi n2;
int k;
int ans;
    for(int i=0;i<n1.size();i++){
        for(int j=0;j<n2.size();j++){
            if(n1[i]%(n2[j]*k)==0) ans++;
        }
    }
return ans;
}