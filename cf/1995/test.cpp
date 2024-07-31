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
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int tt;
cin>>tt;
while(tt--){
    int n;
    cin>>n;
    vector<long double> a(n);
    fo(n) cin>>a[i];
    long double prev=a[0]/10000;
    long double sum=0;
    for(int i=1;i<n;i++){
        a[i]/=pow(10,4);
        if(a[i]>prev){
            prev=a[i];
            continue;
        }
        else if(a[i]==1){
            prev*=pow(10,4);
            a[i]*=pow(10,4);
            long double s1= log(prev)/log(a[i]);
            long double step=ceil((double)log(s1)/(double)log(2));
            cout<<a[i]<<" "<<step<<" "<<prev<<endl;
            sum+=step;
            continue;
        }
        long double s1= log(prev)/log(a[i]);
        long double step=ceil((double)log(s1)/(double)log(2));
        cout<<a[i]<<" "<<step<<" "<<prev<<endl;
        sum+=step;
        prev=pow(a[i],pow(2,step));
        // cout<<prev<<endl;
    }
    cout<<sum<<endl;
}

}