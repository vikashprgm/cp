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
    int x,y;
    cin>>x>>y;
    int a=0,b=0;
    bool con=true;
    while(x>=1 && y>=4){
        if(con){
            x-=1;
            y-=4;
            a++;
        }
        else{
            x-=1;
            y-=4;
            b++;
        }
        con=!con;
    }
    string s;
    s=a>b ? "Alice" : "Bob";
    cout<<s;
}